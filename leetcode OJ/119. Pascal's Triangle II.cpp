class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0)
            return vector<int> (1,1);
        if(rowIndex == 1)
        {
            return vector<int> (2,1);;
        }
        vector<int> v(2,1);
        for(int i = 2; i <= rowIndex; i ++){
            vector<int> cur_v(i+1,1);
            for(int j = 1; j < i; j ++){
                cur_v[j] = v[j-1] + v[j];
            }
            v = cur_v;
        }
        
        return v;

    }
};