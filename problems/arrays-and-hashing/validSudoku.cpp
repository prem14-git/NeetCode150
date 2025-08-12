class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // optimal using vectors :  
        unordered_map<int , vector<int>> ump1; // row
        unordered_map<int , vector<int>> ump2; // col
        map<pair<int , int> , vector<int>> ump3; // square

        for (int row=0 ; row<9 ; row++){
            for (int col=0 ; col<9 ; col++){
                if (board[row][col] == '.'){
                    // do nothing
                    continue;
                }
                else {
                    if (find(ump1[row].begin() , ump1[row].end() , board[row][col]) != ump1[row].end() ||
                        find(ump2[col].begin() , ump2[col].end() , board[row][col]) != ump2[col].end()||
                        find(ump3[{row/3 , col/3}].begin() , ump3[{row/3 , col/3}].end() , board[row][col]) != ump3[{row/3 , col/3}].end()
                        ){
                            return false;
                    }
                }
                ump1[row].push_back(board[row][col]);
                ump2[col].push_back(board[row][col]);
                ump3[{row/3 , col/3}].push_back(board[row][col]);
            }
        }
        return true;

        // optimal using hashSets: 
        // unordered_map<int , unordered_set<int>> ump1;
        // unordered_map<int , unordered_set<int>> ump2;
        // map<pair<int , int> , unordered_set<int>>ump3;

        // for (int row=0 ; row<9 ; row++){
        //     for (int col=0 ; col<9 ; col++){
        //         if (board[row][col] == '.'){
        //             // do nothing
        //             continue;
        //         }
        //         else {
        //             if (ump1[row].count(board[row][col]) || 
        //                 ump2[col].count(board[row][col]) ||
        //                 ump3[{row/3 , col/3}].count(board[row][col]))
        //             {
        //                 return false;
        //             }
        //         }
        //         ump1[row].insert(board[row][col]);
        //         ump2[col].insert(board[row][col]);
        //         ump3[{row/3 , col/3}].insert(board[row][col]);
        //     }
        // }
        // return true;
    }
};