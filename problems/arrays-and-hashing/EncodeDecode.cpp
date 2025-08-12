// Note : It is on lintcode !!

class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        // write your code here
        string answer = "";
        for (auto s : strs){
            int n = s.size();
            answer += to_string(n);
            answer += "#";
            answer += s;
        }

        return answer;
    }

    /*
     * @param str: A string
     * @return: decodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
        vector<string> answer;
        int i=0;
        while(i < str.size()){
            int j = i;
            while(str[j] != '#'){
                j += 1;
            }
            int length = stoi(str.substr(i , j - i));
            string s = str.substr(j + 1 , length);
            answer.push_back(s);
            i = j + 1 + length;
        }
        return answer;
    }
};