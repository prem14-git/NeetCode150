#!/usr/bin/env python3
"""
Automatic Progress Tracker for NeetCode 150
Scans the problems directory and updates README.md with current progress
"""

import os
import re
from pathlib import Path

# NeetCode 150 categories with their expected problem counts
CATEGORIES = {
    "Arrays & Hashing": 9,
    "Two Pointers": 5,
    "Sliding Window": 6,
    "Stack": 7,
    "Binary Search": 7,
    "Linked List": 10,
    "Trees": 15,
    "Heap / Priority Queue": 7,
    "Backtracking": 9,
    "Tries": 6,
    "Graphs": 13,
    "Advanced Graphs": 9,
    "1-D Dynamic Programming": 12,
    "2-D Dynamic Programming": 8,
    "Greedy": 5,
    "Intervals": 6,
    "Math & Geometry": 4,
    "Bit Manipulation": 4
}

def get_category_from_folder(folder_name):
    """Convert folder name to category name"""
    folder_mapping = {
        "arrays-hashing": "Arrays & Hashing",
        "two-pointers": "Two Pointers",
        "sliding-window": "Sliding Window",
        "stack": "Stack",
        "binary-search": "Binary Search",
        "linked-list": "Linked List",
        "trees": "Trees",
        "heap-priority-queue": "Heap / Priority Queue",
        "backtracking": "Backtracking",
        "tries": "Tries",
        "graphs": "Graphs",
        "advanced-graphs": "Advanced Graphs",
        "1d-dynamic-programming": "1-D Dynamic Programming",
        "2d-dynamic-programming": "2-D Dynamic Programming",
        "greedy": "Greedy",
        "intervals": "Intervals",
        "math-geometry": "Math & Geometry",
        "bit-manipulation": "Bit Manipulation"
    }
    return folder_mapping.get(folder_name, folder_name)

def count_solutions_in_directory(directory_path):
    """Count .cpp files in a directory"""
    if not os.path.exists(directory_path):
        return 0
    
    count = 0
    for file in os.listdir(directory_path):
        if file.endswith('.cpp'):
            count += 1
    return count

def calculate_progress():
    """Calculate progress for all categories"""
    progress = {}
    total_completed = 0
    
    problems_dir = Path("problems")
    
    if not problems_dir.exists():
        print("❌ 'problems' directory not found. Creating it...")
        problems_dir.mkdir()
        return {cat: 0 for cat in CATEGORIES.keys()}, 0
    
    for folder_name in os.listdir(problems_dir):
        folder_path = problems_dir / folder_name
        if folder_path.is_dir():
            category = get_category_from_folder(folder_name)
            if category in CATEGORIES:
                completed = count_solutions_in_directory(folder_path)
                progress[category] = completed
                total_completed += completed
    
    # Add categories with 0 progress if they don't exist
    for category in CATEGORIES:
        if category not in progress:
            progress[category] = 0
    
    return progress, total_completed

def update_readme(progress, total_completed):
    """Update the README.md file with new progress"""
    readme_path = "Readme.md"
    
    if not os.path.exists(readme_path):
        print("❌ README.md not found!")
        return False
    
    with open(readme_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Update overall progress
    overall_pattern = r'(\*\*Completed\*\*: )\d+/\d+'
    overall_replacement = f'\\g<1>{total_completed}/150'
    content = re.sub(overall_pattern, overall_replacement, content)
    
    # Update progress percentage
    percentage = (total_completed / 150) * 100
    percentage_pattern = r'(\*\*Completed\*\*: \d+/150 \()\d+%'
    percentage_replacement = f'\\g<1>{percentage:.0f}%'
    content = re.sub(percentage_pattern, percentage_replacement, content)
    
    # Update progress table
    table_pattern = r'(\| .* \| \d+ \| \d+ \| \d+% \|)'
    
    def replace_table_row(match):
        line = match.group(1)
        for category, completed in progress.items():
            if category in line:
                total = CATEGORIES[category]
                percentage = (completed / total) * 100 if total > 0 else 0
                return f'| {category} | {completed} | {total} | {percentage:.0f}% |'
        return line
    
    content = re.sub(table_pattern, replace_table_row, content, flags=re.MULTILINE)
    
    # Write updated content
    with open(readme_path, 'w', encoding='utf-8') as f:
        f.write(content)
    
    return True

def create_problems_structure():
    """Create the problems directory structure if it doesn't exist"""
    problems_dir = Path("problems")
    problems_dir.mkdir(exist_ok=True)
    
    for category in CATEGORIES:
        folder_name = category.lower().replace(' ', '-').replace('/', '-').replace('&', 'and')
        folder_path = problems_dir / folder_name
        folder_path.mkdir(exist_ok=True)
        
        # Create a README for each category
        readme_path = folder_path / "README.md"
        if not readme_path.exists():
            with open(readme_path, 'w', encoding='utf-8') as f:
                f.write(f"# {category}\n\n")
                f.write(f"Total problems in this category: {CATEGORIES[category]}\n\n")
                f.write("## Problems\n\n")
                f.write("Add your .cpp solution files here.\n")

def main():
    """Main function"""
    print("🚀 NeetCode 150 Progress Tracker")
    print("=" * 40)
    
    # Create directory structure if needed
    create_problems_structure()
    
    # Calculate progress
    progress, total_completed = calculate_progress()
    
    print(f"\n📊 Current Progress: {total_completed}/150 ({total_completed/150*100:.1f}%)")
    print("\n📈 Progress by Category:")
    print("-" * 50)
    
    for category in CATEGORIES:
        completed = progress.get(category, 0)
        total = CATEGORIES[category]
        percentage = (completed / total) * 100 if total > 0 else 0
        bar = "█" * int(percentage / 5) + "░" * (20 - int(percentage / 5))
        print(f"{category:<25} {completed:>2}/{total:<2} {percentage:>5.1f}% {bar}")
    
    # Update README
    if update_readme(progress, total_completed):
        print(f"\n✅ README.md updated successfully!")
        print(f"📝 Total problems completed: {total_completed}/150")
    else:
        print("\n❌ Failed to update README.md")

if __name__ == "__main__":
    main()
