class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int r = 0;
        unordered_map<char , int> ump1 , ump2;
        for (char & ch : t){
            ump2[ch] += 1;
            ump1[ch] = 0;
        }
        int need = ump2.size();
        int have = 0;
        int n = s.size();
        vector<int> ans;
        int Mlen = INT_MAX;
        while (r < n){
            if (ump1.find(s[r]) != ump1.end()){
                ump1[s[r]] += 1;
                if (ump1[s[r]] == ump2[s[r]]){
                    have += 1;
                }
            }
            while(have == need){
                int len = r - l + 1;
                if (len < Mlen){ 
                    ans = {l , r};
                    Mlen = len;
                }
                if (ump1.find(s[l]) != ump1.end()){
                    ump1[s[l]] -= 1;
                    if (ump1[s[l]] < ump2[s[l]]){
                        have -= 1;
                    }
                }
                l += 1;
            }
            r += 1;
        }
        string answer = "";
        if (Mlen == INT_MAX){
            return answer;
        }
        answer = s.substr(ans[0] , Mlen);
        return answer;
    }
};