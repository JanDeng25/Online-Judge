class Solution {
public:
    int maxProduct(vector<string>& words) {
        int res = 0;
        int n = words.size();
        int *w = new int[n];
        int *len = new int[n];
        for(int i = 0; i < n; i++){
            len[i] = words[i].length();
            w[i] = 0;
            for(int j = 0; j < len[i]; j++)
                w[i] |= 1 << (words[i][j] - 'a');
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(!(w[i] & w[j])){
                    if(res < len[i] * len[j])
                        res = len[i] * len[j];
                }
            }
        }
        return res;
    }
};