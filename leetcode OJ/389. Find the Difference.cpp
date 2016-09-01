class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s == "")
            return t[0];
        int i = 0;
        char ch = s[i] ^ t[i];
        
        for(i = 1; i < s.length(); i++){
            ch = ch ^ (s[i] ^ t[i]);
        }
        ch = ch ^ t[i];
        return ch;
    }
};