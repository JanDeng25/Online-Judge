class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0;
        int bit = 0;
        while(bit < 32){
            if((x & 1) != (y & 1)){
                dist ++;
            }
            x >>= 1;
            y >>= 1;
            bit ++;
        }
        return dist;
    }
};