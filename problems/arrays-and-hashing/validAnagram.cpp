class Solution {
public:
    bool isAnagram(string s, string t) {

        // Brute !
        // sort(s.begin() , s.end());
        // sort(t.begin() , t.end());
        // return (s == t);

        
        // Optimal !
        int n1 = s.size();
        int n2 = t.size();

        if (n1 != n2) return false;
        vector<int> hashTableS(27 , 0) , hashTableT(27 , 0);
        for (int i=0 ; i<n1 ; i++){
            hashTableS[s[i] - 'a']++;
            hashTableT[t[i] - 'a']++;
        }

        for (int i=0 ; i<hashTableS.size() ; i++){
            if (hashTableS[i] != hashTableT[i]) return false;
        }

        return true;
    }
};



// Python code : 

// class Solution:
//     def isAnagram(self, s: str, t: str) -> bool:

//         # Brute !
//         # return sorted(s) == sorted(t)



//         # Better
//         # return Counter(s) == Counter(t)  -> # Khalchya code ch in built function ae hai !!

//         countS , countT = {} , {}

//         if (len(s) != len(t)):
//             return False

//         for i in range(len(s)):
//             countS[s[i]] = countS.get(s[i] , 0) + 1
//             countT[t[i]] = countT.get(t[i] , 0) + 1
        
//         for k in countS:
//             if (countS[k] != countT.get(k , 0)):
//                 return False
//         return True

        