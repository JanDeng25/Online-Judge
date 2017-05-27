class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int> > res(r, vector<int>(c, 0));
        int row = nums.size();
        if(row == 0)
            return nums;
        int col = nums[0].size();
        if(col == 0 || col * row != r * c)
            return nums;
        int p = 0, q = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(q == col){
                    q = 0;
                    p ++;
                }
                res[i][j] = nums[p][q];
                q ++;
            }
        }
        return res;
    }
};