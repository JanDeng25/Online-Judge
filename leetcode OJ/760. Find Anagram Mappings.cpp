class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> res(n, 0);
        map<int, int> p;
        for(int i = 0; i < n; i++){
            p[B[i]] = i;
        }
        for(int i = 0; i < n; i++)
            res[i] = p[A[i]];
        return res;
    }
};