class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Optimal 
        int left = 0 , right = 1 , n = prices.size();
        int maxProfit = 0;
        while(right < n){
            int curr_profit = prices[right] - prices[left];
            if (curr_profit > 0){
                maxProfit = max(maxProfit , curr_profit);
            }
            else {
                left = right;
            }
            right += 1;
        }
        return maxProfit;
    }
};