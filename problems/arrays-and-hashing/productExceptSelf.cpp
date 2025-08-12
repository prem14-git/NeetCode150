class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Better O(n) + O(n)
        // int n = nums.size();
        // vector<int> prefix(n , 1) ; 
        // prefix[0] = nums[0];
        // vector<int> postfix(n , 1) ; 
        // postfix[n - 1] = nums[n - 1];
        // for (int i=1 ; i<n ; i++){
        //     prefix[i] = prefix[i - 1] * nums[i];
        // }
        // for (int i=n-2 ; i>=0 ; i--){
        //     postfix[i] = postfix[i + 1] * nums[i];
        // }
        // vector<int> answer(n , 1);

        // for (int i=0 ; i<n ; i++){
        //     if (i == 0){ 
        //         answer[i] = 1 * postfix[i + 1];
        //     }
        //     else if (i == n-1){
        //         answer[i] = prefix[i - 1] * 1;
        //     }
        //     else {
        //         answer[i] = prefix[i - 1] * postfix[i + 1];
        //     }
        // }
        // return answer;


        // Best ! O(n) + O(1) : 
        int n = nums.size();
        int pre = 1 , post = 1;
        vector<int> answer(n , 1);
        int prefix = 1;
        for (int i=0 ; i<n ; i++){
            answer[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i=n-1 ; i>=0 ; i--){
            answer[i] *= postfix;
            postfix *= nums[i];
        }
        return answer;
    }
};





// Python code : 
// class Solution:
//     def productExceptSelf(self, nums: List[int]) -> List[int]:
//         res = [1] * (len(nums))
//         prefix = 1
//         for i in range(len(nums)):
//             res[i] = prefix
//             prefix *= nums[i]
//         postfix = 1
//         for i in range(len(nums) - 1  , -1 , -1):
//             res[i] *= postfix
//             postfix *= nums[i]
//         return res
        