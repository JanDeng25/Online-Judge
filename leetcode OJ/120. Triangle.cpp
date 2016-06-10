class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int *miniTotal = new int[triangle.size()];
        if(triangle.size() == 0 || triangle[0].size() == 0)
            return 0;
        if(triangle.size() == 1){
            return triangle[0][0];
        }
        miniTotal[0] = triangle[0][0];
        int j, i;
        for(i = 1; i < triangle.size(); i++){
            //���ܸı�ԭ�������飬Ҫ��������ؼ�
            
            j = i;
            miniTotal[j] = miniTotal[j-1] + triangle[i][j];
            
            //cout << miniTotal[j] << endl;
            j --;
            for(j; j > 0; j --){
                miniTotal[j] = min(miniTotal[j-1] + triangle[i][j], miniTotal[j] + triangle[i][j]);
                //cout << miniTotal[j] << endl;
            }
            miniTotal[j] += triangle[i][j];
            //cout << miniTotal[j] << endl;
        }
        //����miniTotal��С��һ��
        int res = miniTotal[0];
        for(int k = 1; k < i; k++)
        {
            if(res > miniTotal[k])
                res = miniTotal[k];
        }
        return res;
    }
};