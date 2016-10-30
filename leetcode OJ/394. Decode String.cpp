class Solution {
public:
    /*using stack
    string decodeString(string s) {
        string res = "";
        stack<string> str;
        string cur_str = "";
        int n = 0;
        stack<int> num;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                n = 10 * n + s[i] - '0';
            }
            else if(s[i] == '['){
                str.push(cur_str);
                cur_str = "";
                num.push(n);
                n = 0;
            }
            else if(isalpha(s[i])){
                if(!num.empty()){
                    cur_str += s[i];
                }
                else res += s[i];
            }
            else if(s[i] == ']'){
                int t = num.top();
                num.pop();
                if(num.empty()){
                    for(int i = 0; i < t; i++){
                        res += cur_str;
                    }
                    cur_str = str.top();
                    str.pop();
                }
                else{
                    string tmp = "";
                    for(int i = 0; i < t; i++){
                        tmp += cur_str;
                    }
                    cur_str = str.top() + tmp;
                    str.pop();
                }
            }
        }
        return res;
    }
    */
    
    string dfs(string s, int &k){
        string res = "";
        int n = 0;
        while(k < s.length()){
            if(isdigit(s[k])){
                n = 10 * n + s[k] - '0';
                k++;
            }
            else if(s[k] == '['){
                k++;
                string str = dfs(s, k);
                for(int i = 0; i < n; i++){
                    res += str;
                }
                n = 0;
            }
            else if(s[k] == ']'){
                k++;
                return res;
            }
            else{
                res += s[k];
                k++;
            }
        }
        return res;
    }
    string decodeString(string s) {
        int k = 0;
        return dfs(s, k);
    }
};