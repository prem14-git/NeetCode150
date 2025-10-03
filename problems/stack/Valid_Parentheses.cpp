class Solution {
public:
    bool isValid(string s) {
        unordered_map<char , char> ump;
        ump[')'] = '(';
        ump[']'] = '[';
        ump['}'] = '{';
        int n = s.size();
        stack<char> st;
        for (char & ch : s){
            if (!st.empty() && ump.find(ch) != ump.end()){
                if (!st.empty() && st.top() == ump[ch]){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else {
                st.push(ch);
            }
        }
        if (st.empty()) return true;
        return false;
    }
};