class Solution {
public:
    int findComplement(int num) {
        /*
        //solution 1:
        int ans = num;
        int i = 1;
        ans >>= 1;
        while(ans){
            i = (i << 1) + 1;
            ans >>= 1;
            //cout << i << endl;
        }
        return i ^ num;
        */
        unsigned m = ~0;
        while(m & num){
            m <<= 1;
        }
        return ~num & ~m;
    }
};