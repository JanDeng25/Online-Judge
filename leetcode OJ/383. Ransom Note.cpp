class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i = 0; i < ransomNote.length(); i++){
            int j = magazine.find(ransomNote[i]);
            if(j == -1)
                return false;
            string magazine1 = magazine.substr(0,j);
            string magazine2 = magazine.substr(j+1,magazine.length() - 1 - j);
            magazine = magazine1 + magazine2;
        }
        return true;
    }
};