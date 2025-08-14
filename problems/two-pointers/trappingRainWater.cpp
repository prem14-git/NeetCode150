class Solution {
public:
    int trap(vector<int>& height) {
        // optimal basically  ------>> formula = min (maxLeft , maxRight) - height[i]
        int n = height.size();
        vector<int> leftMax(n) , rightMax(n);

        // filling left max
        int curr_left_max = 0; 
        for (int i=0 ; i<n ; i++){
            leftMax[i] = curr_left_max;
            curr_left_max = max(curr_left_max , height[i]);
        }

        // filling right max
        int curr_right_max = 0; 
        for (int i=n-1 ; i>=0 ; i--){
            rightMax[i] = curr_right_max;
            curr_right_max = max(curr_right_max , height[i]);
        }

        int answer = 0;
        for (int i=0 ; i<n ; i++){
            if((min(leftMax[i] , rightMax[i]) - height[i]) > 0){
                answer += (min(leftMax[i] , rightMax[i]) - height[i]);
            }
            else{
                answer += 0;
            }
        }

        return answer;
    }
};