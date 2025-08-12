class Solution {
public:
    void helper(string & s , unordered_map<string , vector<string>> & ump){
        vector<int> hashTable(28 , 0);
        for (char & ch : s){
            hashTable[ch - 'a'] += 1;
        }
        string temp = "";
        for (int i=0 ; i<hashTable.size() ; i++){
            if (hashTable[i] != 0){
                temp += to_string(i);
                temp += '#';
                temp += to_string(hashTable[i]);
                temp += '|';
            }
        }
        ump[temp].push_back(s);
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Better: 
        // unordered_map<string , vector<string>> ump;
        // for (int i=0 ; i<strs.size() ; i++){
        //     string str = strs[i];
        //     sort(str.begin() , str.end());
        //     if (ump.find(str) == ump.end()){
        //         ump[str].push_back(strs[i]);
        //     }
        //     else {
        //         ump[str].push_back(strs[i]);
        //     }
        // }

        // vector<vector<string>> answer;
        // for (const auto & pr : ump){
        //     answer.push_back(pr.second);
        // }

        // return answer;



        // Best !

        unordered_map<string , vector<string>> ump;
        for (int i=0 ; i<strs.size() ; i++){
            string s = strs[i];
            helper(s , ump);
        }
        vector<vector<string>> answer;
        for (const auto & pr : ump){
            answer.push_back(pr.second);
        }

        return answer;
    }
};





// Python code : 

// class Solution:
//     def helper(count: List[int])->str:
//         temp = ""
//         for i in range(len(count)):
//             temp += str(i)
//             temp += '#'
//             temp += str(count[i])
//             temp += '|'
//         return temp

//     def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
//         hashMap = defaultdict(list)
//         for s in strs:
//             count = [0] * 26
//             for c in s:
//                 count[ord(c) - ord('a')] += 1 
//             temp = Solution.helper(count)               
//             hashMap[temp].append(s)
//         return list(hashMap.values())
            
        