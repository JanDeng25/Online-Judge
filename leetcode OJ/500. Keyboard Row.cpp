class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string s[3];
        s[0] = "QWERTYUIOPqwertyuiop";
        s[1] = "ASDFGHJKLasdfghjkl";
        s[2] = "ZXCVBNMzxcvbnm";
        for(int i = 0; i < words.size(); i++){
            int flag = -1;
            for(int j = 0; j < words[i].length(); j++){
                for(int k = 0; k < 3; k ++){
                    if(s[k].find(words[i][j]) != -1){
                        if(flag == -1)
                            flag = k;
                        else if(k != flag){
                            flag = -2;
                            break;
                        }
                    }
                }
                if(flag == -2)
                    break;
            }
            if(flag != -2)
                ans.push_back(words[i]);
        }
        return ans;
    }
};