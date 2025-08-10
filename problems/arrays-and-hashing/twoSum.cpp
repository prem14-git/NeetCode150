class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute :  
        // int n = nums.size();
        // for (int i=0 ; i<n ; i++){
        //     for (int j=i+1 ; j<n ; j++){
        //         if (nums[i] + nums[j] == target){
        //             return {i , j};
        //         }
        //     }
        // }
        // return {};

        // Better : 
        // int n = nums.size();
        // unordered_map<int , vector<int>> ump;
        // for (int i=0 ; i<n ; i++){
        //     ump[nums[i]].push_back(i);
        // }
        // for (int i=0 ; i<n ; i++){
        //     int curr_el = nums[i];
        //     int remain_el = target - curr_el;

        //     if (ump.find(remain_el) != ump.end()){
        //         vector<int> temp = ump[remain_el];
        //         for (int j=0 ; j<temp.size() ; j++){
        //             if (i != temp[j]){
        //                 return {i , temp[j]};
        //             }
        //         }
        //     }
        // }
        // return {};


        // Best ! (OnePass) : 
        unordered_map<int , int> ump;
        int n = nums.size();
        for (int i=0 ; i<n ; i++){
            if (ump.find(target - nums[i]) != ump.end()){
                return {i , ump[target - nums[i]]};
            }
            else {
                ump[nums[i]] = i;
            }
        }
        return {};
    }
};






// Python codes : 

// class Solution:
//     def twoSum(self, nums: List[int], target: int) -> List[int]:

//         # Brute !
//         # for i in range(len(nums)):
//         #     for j in range (i + 1 , len(nums)):
//         #         if (nums[i] + nums[j] == target):
//         #             return [i , j]
//         # return []



//         # Better !
//         # hashMap = {}
//         # for i in range(len(nums)):
//         #     hashMap.setdefault(nums[i] , []).append(i)
        
//         # for i in range(len(nums)):
//         #     curr_el = nums[i]
//         #     remaine_el = target - curr_el

//         #     if (remaine_el in hashMap):
//         #         ls = hashMap[remaine_el]
//         #         for j in ls:
//         #             if (i != j):
//         #                 return [i , j]
//         # return []


//         # Best ! 
//         # hashMap = {}
//         # for i in range(len(nums)):
//         #     if ((target - nums[i]) in hashMap):
//         #         return [i , hashMap[target - nums[i]]]
//         #     else : 
//         #         hashMap[nums[i]] = i
//         # return []

        