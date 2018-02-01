class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if(m <= 1)
            return true;
        int n = matrix[0].size();
        if(n == 1)
            return true;
        for(int col = 0; col < n - 1; col ++){
            int j = col;
            for(int i = 0; i < m - 1 && j < n - 1; i++, j ++){
                if(matrix[i][j] != matrix[i+1][j+1]){
                    cout << i << ' '  << j << matrix[i][j] << endl;
                    cout << i+1 << ' '  << j+1 << matrix[i+1][j+1] << endl;
                     return false;
                }
                   
            }
        }
        for(int row = 1; row < m - 1; row ++){
            int i = row;
            for(int j = 0; i < m - 1 && j < n - 1; i++, j ++){
                if(matrix[i][j] != matrix[i+1][j+1]){
                    cout << i << ' '  << j << matrix[i][j] << endl;
                    cout << i+1 << ' '  << j+1 << matrix[i+1][j+1] << endl;
                    return false;
                }
            }
        }
        return true;
    }
};