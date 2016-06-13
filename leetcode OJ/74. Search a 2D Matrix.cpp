class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //2*Binary Search
        /*int m = matrix.size() - 1;
        int n = matrix[0].size() - 1;
        cout << m << n << endl;
        if(n == -1 || m == -1)
            return false;
        int low = 0, high = m, mid = 0;
        while(low <= high){
            mid = (low + high) / 2;
            if(target == matrix[mid][0])
                return true;
            else if(target < matrix[mid][0]){
                high = mid-1;
                cout << high << " h " << matrix[mid][0] << endl;
            }
            else{
                low = mid + 1;
                cout << low << " l " << matrix[mid][0] << endl;
            }
        }
        if(matrix[mid][0] > target){
            if(mid == 0)
                return false;
            mid --;
        }
        cout << mid << " mid" <<endl;
        low = 0, high = n;
        int tmid = 0;
        while(low <= high){
            tmid = (low + high) / 2;
            if(target == matrix[mid][tmid])
                return true;
            else if(target < matrix[mid][tmid]){
                high = tmid-1;
                cout << high << " h " << matrix[mid][tmid] << endl;
            }
            else{
                low = tmid + 1;
                cout << low << " l " << matrix[mid][tmid] << endl;
            }
        }
        return false;
        */
        //One BS
        int m = matrix.size(), n = matrix[0].size();
        if(m == 0 || n == 0)
            return false;
        int low = 0, high = m * n - 1, mid, x, y;
        if(high == 0)    return target == matrix[0][0];
        while(low <= high){
            mid = low + (high - low) / 2;
            x = mid / n, y = mid % n;
            if(matrix[x][y] == target)
                return true;
            else if(matrix[x][y] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};