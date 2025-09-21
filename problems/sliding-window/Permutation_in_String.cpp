class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size() , m = s2.size();
        if (n > m) return false;
        unordered_map<char , int> ump1 , ump2;
        for (int i=0 ; i<n ; i++){
            ump1[s1[i]] += 1;
        }
        int l = 0 , r = n - 1;
        for (int i=0 ; i<n ; i++){
            ump2[s2[i]] += 1;
        }

        if (ump1 == ump2) return true;
        while (r < m - 1){
            ump2[s2[l]] -= 1;
            if (ump2[s2[l]] == 0){
                ump2.erase(s2[l]);
            }
            l += 1;
            r += 1;
            ump2[s2[r]] += 1;
            if (ump1 == ump2) return true;
        }

        return false;
    }
};