# 🚀 NeetCode 150 – Data Structures & Algorithms Solutions

<div align="center">

![NeetCode 150](https://img.shields.io/badge/NeetCode-150%20Problems-blue?style=for-the-badge&logo=leetcode)
![Language](https://img.shields.io/badge/Language-C++-orange?style=for-the-badge&logo=cplusplus)
![Status](https://img.shields.io/badge/Status-In%20Progress-yellow?style=for-the-badge)

*A comprehensive collection of my solutions to the **NeetCode 150** Data Structures & Algorithms problems, implemented in **C++**.*

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-blue?style=for-the-badge&logo=linkedin)](https://www.linkedin.com/in/prem-kulkarni-977b26289/)
[![Resume](https://img.shields.io/badge/Resume-View-green?style=for-the-badge&logo=google-drive)](https://drive.google.com/file/d/12UB_-FNSKaRKZjgjW_5duqIp0LwOENCw/view?usp=sharing)

</div>

---

## 📋 Table of Contents
- [About](#-about)
- [Progress Tracking](#-progress-tracking)
- [Topics Covered](#-topics-covered)
- [Solution Structure](#-solution-structure)
- [Getting Started](#-getting-started)
- [Contributing](#-contributing)
- [Connect With Me](#-connect-with-me)
- [License](#-license)

---

## 🎯 About

This repository contains my solutions to the **NeetCode 150** - a curated list of the most important coding problems for technical interviews. Each solution is carefully crafted with:

- **Clean, readable C++ code** with detailed comments
- **Multiple approaches** where applicable (brute force, optimized, etc.)
- **Time & Space complexity analysis**
- **Problem-solving insights** and key takeaways
- **Best practices** and coding standards

### Why NeetCode 150?
The NeetCode 150 list is specifically designed to cover the most common patterns and algorithms that appear in technical interviews at top tech companies. By mastering these problems, you'll be well-prepared for:

- **Software Engineering Interviews** at FAANG+ companies
- **Competitive Programming** contests
- **Algorithm Design** and optimization
- **Problem-solving** skills development

---

## 📊 Progress Tracking

### Overall Progress
- **Total Problems**: 150
- **Completed**: 0/150 (0%)
- **In Progress**: 0
- **Not Started**: 150

*Progress is automatically updated when you run `python update_progress.py`*

### Progress by Category
| Category | Completed | Total | Progress |
|----------|-----------|-------|----------|
| Arrays & Hashing | 0 | 9 | 0% |
| Two Pointers | 0 | 5 | 0% |
| Sliding Window | 0 | 6 | 0% |
| Stack | 0 | 7 | 0% |
| Binary Search | 0 | 7 | 0% |
| Linked List | 0 | 10 | 0% |
| Trees | 0 | 15 | 0% |
| Heap / Priority Queue | 0 | 7 | 0% |
| Backtracking | 0 | 9 | 0% |
| Tries | 0 | 6 | 0% |
| Graphs | 0 | 13 | 0% |
| Advanced Graphs | 0 | 9 | 0% |
| 1-D Dynamic Programming | 0 | 12 | 0% |
| 2-D Dynamic Programming | 0 | 8 | 0% |
| Greedy | 0 | 5 | 0% |
| Intervals | 0 | 6 | 0% |
| Math & Geometry | 0 | 4 | 0% |
| Bit Manipulation | 0 | 4 | 0% |

---

## 🗂 Topics Covered

### 🔢 **Arrays & Hashing** (15 problems)
- Two Sum, Valid Anagram, Contains Duplicate
- Group Anagrams, Top K Frequent Elements
- Product of Array Except Self, Valid Sudoku

### 👆 **Two Pointers** (7 problems)
- Valid Palindrome, Two Sum II
- 3Sum, Container With Most Water
- Trapping Rain Water

### 🪟 **Sliding Window** (6 problems)
- Best Time to Buy and Sell Stock
- Longest Substring Without Repeating Characters
- Minimum Window Substring

### 📚 **Stack** (7 problems)
- Valid Parentheses, Min Stack
- Evaluate Reverse Polish Notation
- Generate Parentheses

### 🔍 **Binary Search** (7 problems)
- Binary Search, Search a 2D Matrix
- Koko Eating Bananas, Find Minimum in Rotated Sorted Array

### 🔗 **Linked List** (10 problems)
- Reverse Linked List, Merge Two Sorted Lists
- Linked List Cycle, Remove Nth Node From End

### 🌳 **Trees** (15 problems)
- Maximum Depth of Binary Tree, Same Tree
- Binary Tree Level Order Traversal, Validate Binary Search Tree

### 🔤 **Tries** (6 problems)
- Implement Trie, Design Add and Search Words Data Structure
- Word Search II

### ⚡ **Heap / Priority Queue** (7 problems)
- Kth Largest Element in an Array
- Merge K Sorted Lists, Find Median from Data Stream

### 🔄 **Backtracking** (9 problems)
- Subsets, Combination Sum
- Permutations, N-Queens

### 🕸️ **Graphs** (15 problems)
- Number of Islands, Clone Graph
- Pacific Atlantic Water Flow, Course Schedule

### 🌐 **Advanced Graphs** (9 problems)
- Reconstruct Itinerary, Min Cost to Connect All Points
- Network Delay Time

### 📈 **1-D Dynamic Programming** (12 problems)
- Climbing Stairs, House Robber
- Coin Change, Longest Increasing Subsequence

### 📊 **2-D Dynamic Programming** (8 problems)
- Longest Common Subsequence, Edit Distance
- Interleaving String

### 🔧 **Bit Manipulation** (4 problems)
- Single Number, Number of 1 Bits
- Counting Bits, Missing Number

### 📐 **Math & Geometry** (4 problems)
- Rotate Image, Spiral Matrix
- Set Matrix Zeroes

---

## 📁 Solution Structure

Each solution follows a consistent structure:

```
problems/
├── arrays-hashing/
│   ├── 1-two-sum.cpp
│   ├── 49-group-anagrams.cpp
│   └── ...
├── two-pointers/
│   ├── 125-valid-palindrome.cpp
│   ├── 167-two-sum-ii.cpp
│   └── ...
└── ...
```

## 🚀 Getting Started

### Prerequisites
- **C++ Compiler** (GCC 7.0+ or Clang 5.0+)
- **Git** for version control
- **IDE** (VS Code, CLion, or any C++ IDE)

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/prem14-git/NeetCode150.git
   cd NeetCode150
   ```

2. **Navigate to a specific problem:**
   ```bash
   cd problems/arrays-hashing
   ```

3. **Compile and run:**
   ```bash
   g++ -std=c++17 problem-name.cpp -o solution
   ./solution
   ```

### Running Tests
```bash
# Run all tests
make test

# Run specific category tests
make test-arrays
```

### 📊 Automatic Progress Tracking

The repository includes an automatic progress tracking system that updates your README.md whenever you add new solutions.

**To update progress:**
```bash
# Using Python script
python update_progress.py

# Or on Windows, double-click:
update_progress.bat
```

**What it does:**
- ✅ Scans your `problems/` directory for `.cpp` files
- ✅ Counts completed problems by category
- ✅ Updates the progress table in README.md
- ✅ Shows visual progress bars in terminal
- ✅ Creates missing directory structure automatically

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/amazing-solution`)
3. **Commit** your changes (`git commit -m 'Add amazing solution'`)
4. **Push** to the branch (`git push origin feature/amazing-solution`)
5. **Open** a Pull Request

### Contribution Guidelines
- Follow the existing code style and structure
- Add comprehensive comments and explanations
- Include test cases for your solutions
- Update the progress tracking in README.md
- Ensure all solutions compile and run correctly

---

## 👨‍💻 Connect With Me

<div align="center">

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Prem%20Kulkarni-blue?style=for-the-badge&logo=linkedin)](https://www.linkedin.com/in/prem-kulkarni-977b26289/)
[![Resume](https://img.shields.io/badge/Resume-View%20PDF-green?style=for-the-badge&logo=google-drive)](https://drive.google.com/file/d/12UB_-FNSKaRKZjgjW_5duqIp0LwOENCw/view?usp=sharing)
[![GitHub](https://img.shields.io/badge/GitHub-prem14--git-black?style=for-the-badge&logo=github)](https://github.com/prem14-git)

</div>

### 📧 Contact Information
- **LinkedIn**: [Prem Kulkarni](https://www.linkedin.com/in/prem-kulkarni-977b26289/)
- **Resume**: [View PDF](https://drive.google.com/file/d/12UB_-FNSKaRKZjgjW_5duqIp0LwOENCw/view?usp=sharing)
- **GitHub**: [prem14-git](https://github.com/prem14-git)

### 💼 Professional Background
I'm passionate about software engineering and problem-solving. This repository represents my commitment to mastering Data Structures & Algorithms through systematic practice and continuous learning.

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

*Happy coding and problem-solving! 🎉*

</div>