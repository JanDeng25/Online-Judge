class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //note : you must sell the stock before you buy again
        //which means you can sell and then buy on the same day
        int maxP = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1])
                maxP += (prices[i] - prices[i-1]);
        }
        return maxP;
    }
};