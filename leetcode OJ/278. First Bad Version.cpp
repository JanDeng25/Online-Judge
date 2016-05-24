// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int bot = 1,top = n;
        int mid = bot;
        while(bot < top){
            mid = bot + (top - bot) / 2;
            if(!isBadVersion(mid)){
                bot = mid + 1;
            }
            else
                top = mid;
        }
        return bot;
        
    }
};