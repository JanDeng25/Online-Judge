class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTri;
        if(numRows == 0)
            return pascalTri;
        if(numRows == 1)
        {
            vector<int> v(1,1);
            pascalTri.push_back(v);
            return pascalTri;
        }
        vector<int> v1(1,1);
        pascalTri.push_back(v1);
        vector<int> v2(2,1);
        pascalTri.push_back(v2);
        if(numRows == 2)
        {
            return pascalTri;
        }
        for(int i = 2; i < numRows;i ++){
            vector<int> v(i+1,1);
            for(int j = 1; j < i; j ++){
                v[j] = pascalTri[i-1][j-1] + pascalTri[i-1][j];
            }
            pascalTri.push_back(v);
        }
        return pascalTri;
    }
};