class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s.find(s[i]) == s.find_last_of(s[i]))
                return s.find(s[i]);
        }
        return -1;
    }
};