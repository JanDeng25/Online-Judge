class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int ind = s.find(' ');
        while(ind != -1){
            for(int i = ind - 1; i >= 0; i--){
                ans += s[i];
            }
            ans += ' ';
            s = s.substr(ind+1);
            ind = s.find(' ');
        }
        for(int i = s.length()-1; i >= 0; i--)
            ans += s[i];
        return ans;
    }
};