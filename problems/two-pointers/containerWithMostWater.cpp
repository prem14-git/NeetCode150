class Solution {
public:
    int maxArea(vector<int>& height) {
        // brute 
        // int n = height.size();
        // int answer = 0; 
        // for (int i=0 ; i<n ; i++){
        //     for (int j=i+1 ; j<n ; j++){
        //         int area = (j - i) * min (height[i] , height[j]);
        //         answer = max(answer , area);
        //     }
        // }
        // return answer;

        // optimal 
        int n = height.size();
        int left = 0 , right = n - 1;
        int answer = 0;
        while(left < right){
            int curr_area = (right - left) * min(height[left] , height[right]);
            answer = max(answer , curr_area);
            if (height[left] >= height[right]){
                right--;
            }
            else {
                left++;
            }
        }
        return answer;
    }
};