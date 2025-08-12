class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Better (maxHeap):
        // priority_queue<pair<int , int>> maxHeap;
        // unordered_map<int , int> ump;
        // for (int & el : nums){
        //     ump[el]++;
        // }
        // for (const auto & pr : ump){
        //     maxHeap.push({pr.second , pr.first});
        // }
        // vector<int> answer;
        // while(k-- > 0){
        //     answer.push_back(maxHeap.top().second);
        //     maxHeap.pop();
        // }
        // return answer;

        // Optimal Bucket sort  O(n) !!
        int n = nums.size();
        unordered_map<int , int> ump;
        for (auto & el : nums){
            ump[el] += 1;
        }
        vector<vector<int>> Bucket(n + 1);
        for (const auto & pr : ump){
            int count = pr.second;
            Bucket[count].push_back(pr.first);
        }
        int cnt = 0;
        vector<int> answer;
        for (int i=Bucket.size() - 1 ; i>=0 ; i--){
            if (!Bucket[i].empty()){
                for (int j=0 ; j<Bucket[i].size() ; j++){
                    if (cnt < k){
                        answer.push_back(Bucket[i][j]);
                        cnt++;
                    }
                    else {
                        return answer;
                    }
                }                
            }
            else {
                // empty
                continue;
            }
        }
        return answer;
    }
};