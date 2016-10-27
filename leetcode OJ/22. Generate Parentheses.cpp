class Solution {
public:
    void generate(vector<string>& res, string s, int left, int right){
        if(left == 0 && right == 0){
            res.push_back(s);
            return;
        }
        else if(left > 0){
            generate(res, s + "(", left - 1, right);
        }
        if(left < right){
            generate(res, s + ")", left, right - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(res, "", n, n);
        return res;
    }
};