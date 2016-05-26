class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //justify if each row and each colomn and each 3*3 grid have the repeated element or not
        /*
        //solution 1: using unordered_set to justify
        unordered_set<int> rows[9], cols[9] , grid[3][3];
        for(int i = 0;i < 9; i ++){
            for(int j = 0; j < 9 ; j ++){
                if(board[i][j] != '.'){
                if(rows[i].insert(board[i][j]).second == false || cols[j].insert(board[i][j]).second == false || grid[i/3][j/3].insert(board[i][j]).second == false)
                    return false;
            }
            }
        }
        return true;
        */
        
        //solution 2:using arrays
        int rows[9][9] = {0},cols[9][9] = {0}, grid[3][3][9] = {0};
        for(int i = 0; i < 9; i ++){
            for(int j = 0; j < 9 ; j ++){
                if(board[i][j] != '.'){
                    if(rows[i][board[i][j]-'1'] ++)
                        return false;
                    if(cols[j][board[i][j]-'1'] ++)
                        return false;
                    if(grid[i/3][j/3][board[i][j]-'1'] ++)
                        return false;
                }
            }
        }
        return true;
    }
};