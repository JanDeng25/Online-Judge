class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2)
            return false;
        stack<char> chars;
        for(int i = 0; i < s.length(); i ++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                chars.push(s[i]);
            else {
                if(s[i] == ')'){
                    cout<<'('<<endl;
                    if(chars.empty() || chars.top() != '(')
                        return false;
                    else 
                        chars.pop();
                }
                if(s[i] == ']'){
                    if(chars.empty() || chars.top() != '[')
                        return false;
                    else 
                        chars.pop();
                }
                if(s[i] == '}'){
                    if(chars.empty() || chars.top() != '{')
                        return false;
                    else 
                        chars.pop();
                }
            }
        }
        if(chars.empty())
            return true;
        return false;
    }
};s