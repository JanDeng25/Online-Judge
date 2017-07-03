class Solution {
public:
    /*
    //1188ms,solution 1
    bool anagram(string s, string p){
        
        int als[256] = {0};
        int alp[256] = {0};
        for(int i = 0; i < s.length(); i++){
              als[s[i]]++;
              alp[p[i]]++;
        }   
        for(int i = 0; i < 256; i++){
            if(als[i] != alp[i])
                return false;
        }
        return true;
    }*/
    vector<int> findAnagrams(string s, string p) {
        /*solution 1
        vector<int> pos;
        if(s.length() < p.length() || s == "")
            return pos;
        for(int i = 0; i <= s.length() - p.length(); i++){
            if(anagram(s.substr(i, p.length()), p))
                pos.push_back(i);
        }
        return pos;
        */
        
        //sliding windows by using vector equality
        vector<int> pos;
        if(s.length() < p.length())
            return pos;
        int n = p.length();
        vector<int> counts(256, 0), countp(256, 0);
        for(int i = 0; i < n; i ++){
            countp[p[i]]++;
            counts[s[i]]++;
        }
        if(counts == countp)
            pos.push_back(0);
        for(int i = n; i < s.length();i++){
            counts[s[i]]++;
            counts[s[i-n]]--;
            if(counts == countp)
                pos.push_back(i-n+1);
        }
        return pos;
    }
};