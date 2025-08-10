
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int> ump;
        int n = nums.size();
        for (int i=0 ; i<n ; i++){
            ump[nums[i]]++;
            if (ump[nums[i]] >= 2){
                return true;
            }
        }
        return false;
    }
};



// Python code : 

// class Solution:
//     def containsDuplicate(self, nums: List[int]) -> bool:
//         hashSet = set()   # hashSet
//         for i in nums:
//             if (i in hashSet):
//                 return True
//             hashSet.add(i)
//         return False
        