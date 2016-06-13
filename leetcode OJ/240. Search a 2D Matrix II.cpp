class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        if(m == 0 || n == 0)    return false;
        
            /*int low, high, mid;
            for(int i = 0; i < m; i++){
                low = 0; high = n - 1;
                while(low <= high){
                    mid = low + (high - low) / 2;
                    if(target == matrix[i][mid])
                        return true;
                    else if(target > matrix[i][mid])
                        low = mid + 1;
                    else
                        high = mid - 1;
                }
            }
        return false;
        */
        int i = 0, j = n - 1;
        while(i < m && j >= 0){
            if(target == matrix[i][j])
                return true;
            else if(target > matrix[i][j])
                i ++;
            else 
                j --;
        }
        return false;
    }
};