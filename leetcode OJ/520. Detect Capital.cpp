class Solution {
public:
    bool detectCapitalUse(string word) {
        /*if(word.length() == 1)
            return true;
        if(word[0] >= 'a' && word[0] <= 'z'){
            for(int i = 1; i < word.length(); i++)
                if(word[i] < 'a' || word[i] > 'z')
                    return false;
        }
        else {
            if(word[1] >= 'a' && word[1] <= 'z'){
                for(int i = 2; i < word.length(); i++)
                    if(word[i] < 'a' || word[i] > 'z')
                        return false;
            }
            else{
                for(int i = 2; i < word.length(); i++)
                    if(word[i] >= 'a' && word[i] <= 'z')
                        return false;
            }
        }
        return true;
        */
        int count = 0;
        for(int i = 0; i < word.length(); i++)
            if(isupper(word[i]))   count++;
        return !count || count == word.length() || (count == 1 && isupper(word[0]));
    }
};