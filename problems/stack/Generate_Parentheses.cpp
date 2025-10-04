class Solution {
public:
    void backtrack(int openC , int closeC , vector<string> & answer , string temp , int n){
        if (openC == n && closeC == n){
            answer.push_back(temp);
        }
        if (openC < n){
            backtrack(openC + 1 , closeC , answer , temp + "(" , n);
        }
        if (closeC < openC){
            backtrack(openC , closeC + 1 , answer , temp + ")" , n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        backtrack(0 , 0 , answer ,"" , n);
        return answer;
    }
};