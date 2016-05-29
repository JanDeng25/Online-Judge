class Solution {
public:
    int numTrees(int n) {
        int *num = new int[n+1];
        num[0] = num[1] = 1;
        for(int i = 2; i <= n; i ++){
            num[i] = 0;
            for(int j = 0; j <= i-1; j ++){
                num[i] += num[j] * num[i-1-j];
                //cout<<num[j] << " "<<num[i-j-1]<<endl;
            }
        }
        return num[n];
    }
};