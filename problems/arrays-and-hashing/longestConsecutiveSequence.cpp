class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Better !
        unordered_set<int> ust;
        for (int & n : nums){
            ust.insert(n);
        }
        int answer = 0;
        for (int el : ust){
            if (!ust.count(el - 1)){
                int length = 0;
                while(ust.count(el + length)){
                    length++;
                }
                answer = max(answer , length);
            }
        }
        return answer;


        // Better or even Optimal
        // unordered_map<int , int> ump;
        // int n = nums.size();
        // for (int i=0 ; i<n ; i++){
        //     ump[nums[i]] += 1;
        // }
        // int answer = 0;
        // for (auto & pr : ump){
        //     if (ump.find(pr.first - 1) == ump.end()){
        //         int length = 0;
        //         while(ump.find(pr.first + length) != ump.end()){
        //             length++;
        //         }
        //         answer = max(answer , length);
        //     }
        // }
        // return answer;
    }
};