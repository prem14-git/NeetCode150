class Solution {
public:
    bool isPalindrome(string s) {

        // Better 
        // string new_s = "";
        // for (auto & ch : s){
        //     if (isalnum(ch)){
        //         new_s += tolower(ch);
        //     }
        // }
        // string temp = new_s;
        // reverse(new_s.begin() , new_s.end());
        // return (temp == new_s);

        // Optimal 2 - pointers
        int n = s.size();
        int left = 0;
        int right = n - 1;

        while(left < right){
            char chl = s[left];
            char chr = s[right];

            while(left < right && !isalnum(chl)){
                left++;
                chl = s[left];
            }
            while(right > left && !isalnum(chr)){
                right--;
                chr = s[right];
            }
            if (tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};