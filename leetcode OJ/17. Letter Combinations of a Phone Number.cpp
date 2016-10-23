class Solution {
/*
//recursion: tree retrieve
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string list[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        letterCombinations(res, digits, "", 0, list);
        return res;
    }
private:
    void letterCombinations(vector<string> &res, string digits, string s, int ind, string list[]){
        if(ind == digits.length()){
            if(s.length() != 0)
                res.push_back(s);
            return;
        }
        string temp = list[digits[ind] - '0'];
        for(int i = 0; i < temp.length(); i++){
            string str = s + temp[i];
            letterCombinations(res, digits, str, ind + 1, list);
        }
    }
    */
    
//iteration
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits == "")
            return res;
        string list[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        res.push_back("");
        for(int i = 0; i < digits.length(); i++){
            int size = res.size();
            for(int j = 0; j < size; j++){
                string s = res[0];
                res.erase(res.begin());
                for(int k = 0; k < list[digits[i]-'0'].length(); k++)
                {
                    res.push_back(s + list[digits[i]-'0'][k]);
                }
            }
        }
        return res;
    }    
};