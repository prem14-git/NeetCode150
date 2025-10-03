class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int n = nums.size();
        int l = 0 , r = 0;
        vector<int> result;
        while(r < n){
            while (!dq.empty() && nums[dq.back()] < nums[r]){
                dq.pop_back();
            }
            dq.push_back(r);

            if (r - l + 1 == k){
                result.push_back(nums[dq.front()]);
                l += 1; 
            }

            while (dq.empty() == false && l > dq.front()){
                dq.pop_front();
            }
            r += 1;
        }
        return result;
    }
};