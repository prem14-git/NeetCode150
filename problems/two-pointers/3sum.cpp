class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // brute!
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // set<vector<int>> tempAns;
        // for (int i=0 ; i<n ; i++){
        //     for (int j=i+1 ; j<n ; j++){
        //         for (int k=j+1 ; k<n ; k++){
        //             if (nums[i] + nums[j] + nums[k] == 0){
        //                 tempAns.insert({nums[i] , nums[j] , nums[k]});
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> answer;
        // for (auto & vec : tempAns){
        //     answer.push_back(vec);
        // }
        // return answer;

        // Better!
        // int n = nums.size();
        // set<vector<int>> tempAns;
        // for (int i=0 ; i<n ; i++){
        //     unordered_set<int> ust;
        //     for (int j=i+1 ; j<n ; j++){
        //         int compliment_no = -(nums[i] + nums[j]);
        //         if (ust.count(compliment_no)){
        //             vector<int> temp = {nums[i] , nums[j] , compliment_no};
        //             sort(temp.begin(),temp.end());
        //             tempAns.insert(temp);
        //         }
        //         ust.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> answer(tempAns.begin() , tempAns.end());
        // return answer;

        // Optimal ()!
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        for (int i=0 ; i<n ; i++){
            int first = nums[i];
            int left = i+1;
            int right = n-1;
            if (i>0 && nums[i] == nums[i - 1]){
                continue;
            }
            while(left < right){
                int curr_sum = nums[left] + nums[right] + first;
                if (left < right && curr_sum < 0){
                    left++;
                }
                else if (left < right && curr_sum > 0){
                    right--;
                }
                else {
                    answer.push_back({first , nums[left] , nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left - 1]) left++;
                    while(left < right && nums[right] == nums[right + 1]) right--;
                }
            }
        }
        return answer;
    }
};