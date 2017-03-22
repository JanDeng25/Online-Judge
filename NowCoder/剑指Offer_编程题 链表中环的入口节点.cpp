class Solution {
public:
    string convert(string s, int numRows) {
        string result = "";
        /*string *str = new string[numRows];
        int i = 0,col = 0;
        while(i < s.length()){
            if(col % 2){
                for(int row = numRows - 2; row >= 1; row --){
                    if(i < s.length()){
                        str[row].append(1,s[i]);
                        i++;
                    }
                    if(i >= s.length()) 
                        break;

                }
            }
            
            else{
                for(int row = 0; row < numRows; row ++){
                    if(i < s.length()){
                        str[row].append(1,s[i]);
                        i++;
                    }
                    if(i >= s.length()) 
                        break;
                }
            }
            col ++;
        }
        for(int row = 0; row < numRows; row ++){
            result = result + str[row];
        }*/
        
        //use math method,find corresponding index
        //the 0th row and the last row need to be handled specially
        if(numRows == 1 || s == "")
            return s;
        int len = s.length();
        //the 0th row
        int ind = 0;
        while(ind < len){
            result += s[ind];
            ind = ind + (numRows - 1) * 2;
        }
        //2~numRows-1 rows
        for(int row = 1 ; row < numRows - 1; row ++){
            ind = row;
            if(ind >= len) break;
            bool odd = true;
            result += s[ind];
            while(ind < len){
                
                if(odd){
                    ind = ind + (numRows - row - 1) * 2;
                    if(ind < len)
                        result += s[ind];
                    odd = false;
                }
                else{
                    ind  = ind + row * 2;
                    if(ind < len)
                        result += s[ind];
                    odd = true;
                }
            }
        }
        //the last row
        ind = numRows - 1;
        while(ind < len){
            result += s[ind];
            ind = ind + (numRows - 1) * 2;
        }
        
        return result;
    }
};