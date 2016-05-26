class Solution {
public:
    string countAndSay(int n) {
        /*string str = "1";
        if(n <= 1)
            return str;
        for(int i = 2; i <= n;i ++){
            int count = 1, j = 0;
            string temp = "";
            for(j; j < str.size()-1; j ++){
                if(str[j] == str[j+1])
                    count ++;
                else{
                    temp += to_string(count) + str[j];
                    count = 1;
                }
            }
            temp += to_string(count) + str[j];
            str = temp;
        }
        
        return str;
        */
        //Recursive
        if(n <= 1)
            return "1";
        string str = "";
        string last_str = countAndSay(n-1);
        int i = 0,j = 0;
        while(j < last_str.size()){
            while(last_str[i] == last_str[j])  j ++;
            str += to_string(j-i) + last_str[i];
            i = j;
        }
        return str;
    }
};