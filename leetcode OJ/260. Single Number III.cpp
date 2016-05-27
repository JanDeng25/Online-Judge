class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2,0);
        int twoNum = 0;

        for(int i = 0; i < nums.size(); i ++){
            twoNum ^= nums[i];
        }
        //twoNum = accumulate(nums.begin(),nums.end(),0,bit_xor<int>());
        /*binary number's opposite number are reprensented as complement.
          & its opposite number can find the MSB(most significant bit) on the right
         */
        twoNum &= -twoNum;
        /*since the two single numbers are different, which means there at least one
          bit of them is different.At last step, we find the MSB, according to which
          we can devide the vector into two parts.Finally use ^ operator to find the
          numbers.
        */
        for(int i = 0; i < nums.size(); i ++){
            if((twoNum & nums[i]) == 0)
                res[0] ^= nums[i];
            else
                res[1] ^= nums[i];
        }
        return res;
    }
};
