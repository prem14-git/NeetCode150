class Solution {
public:
    int helper(unordered_map<char , int> & ump){
        int ans = 0;
        for (auto & pr : ump){
            if (pr.second > ans){
                ans = pr.second;
            }
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char , int> ump;
        int l = 0 , ans = 0;
        int sow = 0;
        for (int i=0 ; i<n ; i++){
            ump[s[i]] += 1;
            int me = helper(ump);
            sow = i - l + 1;
            if (sow - me <= k){
                ans = max (ans , sow);
            }
            while (l <= i && sow - me > k){
                ump[s[l]] -= 1;
                if (ump[s[l]] == 0){
                    ump.erase(s[l]);
                }
                l += 1;
                sow = i - l + 1;
            }
        }
        return ans;
    }
};