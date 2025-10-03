class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto & str : tokens){
            if (str == "+" || str == "-" || str == "*" || str == "/"){
                int sec_val = st.top();
                st.pop();
                int first_val = st.top();
                st.pop();

                if(str == "+"){
                    int new_val = first_val + sec_val;
                    st.push(new_val);
                }
                else if(str == "-"){
                    int new_val = first_val - sec_val;
                    st.push(new_val);
                }
                else if(str == "*"){
                    int new_val = first_val * sec_val;
                    st.push(new_val);
                }
                else{
                    int new_val = first_val / sec_val;
                    st.push(new_val);
                }
            }
            else{ 
                int val = stoi(str);
                st.push(val);
            }
        }
        return st.top();
    }
};