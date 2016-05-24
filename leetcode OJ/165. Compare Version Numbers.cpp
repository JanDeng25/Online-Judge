class Solution {
public:
    bool cmpStrings(string& str1,string& str2){
        int i = str1.find_first_not_of('0');
            str1.erase(0,i);
        int j = str2.find_first_not_of('0');
            str2.erase(0,j);
        
        
        int len1 = str1.length(),len2 = str2.length();
        if(len1 > len2)
            return true;
        else if(len1 < len2)
            return false;
        else{
            return str1 > str2;
        }
    }
    
    int compareVersion(string version1, string version2) {
        string version1_v1 = "", version1_v2 = "",version2_v1 = "",version2_v2 = "";
        vector<string> v1;
        vector<string> v2;
        int ind1 = version1.find(".");
        int ind2 = version2.find(".");
        string temp;
        while(ind1 != string::npos){
            temp.assign(version1,0,ind1);
            v1.push_back(temp);
            version1.erase(0,ind1 + 1);
            ind1 = version1.find(".");
        }
        v1.push_back(version1);
        
        while(ind2 != string::npos){
            temp.assign(version2,0,ind2);
            v2.push_back(temp);
            version2.erase(0,ind2 + 1);
            ind2 = version2.find(".");
        }
        v2.push_back(version2);
        int i;
        string s = "";
        for(i = 0; i < v1.size() && i < v2.size(); i ++){
            if(cmpStrings(v1[i],v2[i]))
                return 1;
            else if(v1[i] == v2[i])
                continue;
            else
                return -1;
        }
        while(i < v1.size()){
            if(cmpStrings(v1[i],s)){
                return 1;
            }
            i ++;
        }
        while(i < v2.size()){
            if(cmpStrings(v2[i],s)){
                return -1;
            }
            i ++;
        }
        return 0;
    }
};