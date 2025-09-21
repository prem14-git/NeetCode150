class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char , int> ump;
        int ans = 0;
        int l = 0;
        for (int i=0 ; i<n ; i++){
            ump[s[i]] += 1;
            while (l <= i && ump[s[i]] > 1){
                ump[s[l]] -= 1;
                if (ump[s[l]] == 0){
                    ump.erase(s[l]);
                }
                l += 1;
            }
            ans = max(ans , (int)ump.size());
        }
        ans = max (ans , (int)ump.size());
        return ans;
    }
};