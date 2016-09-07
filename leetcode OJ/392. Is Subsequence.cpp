class Solution {
public:
    bool isSubsequence(string s, string t) {
        /*bool isSub = true;
        for(int i = 0; i < s.length(); i++){
              int j = t.find(s[i]);
              if(j == -1)
                  return false;
              t = t.substr(j+1);
        }
        return isSub;
        */
        //two pointers
        int i = 0, j = 0;
        while(i < s.length() && j < t.length()){
            if(s[i] == t[j]){
                i ++; 
                j ++;
            }
            else
            {
                j++;
            }
        }
        if(i != s.length() && j == t.length())
            return false;
        return true;
    }
};