class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        //O(n) space dp;
        /*int n = prices.size();
        int * sell = new int[n];    //sell the stock in ith day
        int * buy = new int[n];     //buy the stock in ith day
        buy[0] = -prices[0];                
        sell[0] = 0;
        for(int i = 1; i < n; i++){
            sell[i] = max(sell[i-1], buy[i-1] + prices[i]);
            if(i >= 2)
                buy[i] = max(buy[i-1],sell[i-2] - prices[i]);
            else
                buy[i] = max(buy[i-1], -prices[i]);
        }
        return sell[n-1];
        */
        
        //O(1) space dp;
        int n = prices.size();
        int cursell = 0;    //sell the stock in ith day
        int presell = 0;    //sell the stock in i-1th day
        int curbuy = -prices[0];                
        for(int i = 1; i < n; i++){
            int temp = cursell;
            cursell = max(cursell, curbuy + prices[i]);
            if(i >= 2)
                curbuy = max(curbuy,presell - prices[i]);
            else
                curbuy = max(curbuy, -prices[i]);
            presell = temp;
        }
        return cursell;
    }
};