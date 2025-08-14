class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // brute!
        // int n = numbers.size();
        // for (int i=0 ; i<n ; i++){
        //     int complement_no = target - numbers[i];
        //     auto it = find(numbers.begin() + i + 1 , numbers.end() , complement_no);
        //     if (it != numbers.end()){
        //         int secid = it - numbers.begin();
        //         return {i + 1 , secid + 1};  // they want 1-based indices
        //     }
        // }
        // return {};

        // Optimal!
        int n = numbers.size();
        int left = 0 , right = n - 1;
        while(left < right){
            int curr_sum = numbers[left] + numbers[right];
            if (curr_sum < target){
                left++;
            }
            else if (curr_sum > target){
                right--;
            }
            else {
                return {left + 1 , right + 1};
            }
        }
        return {};
    }
};