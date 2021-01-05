//  Say you have an array for which the ith element is the price of a given stock on day i.

// If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

// Note that you cannot sell a stock before you buy one.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p = 0;
        int min = INT_MAX;
        for(int i =0; i<prices.size(); i++)
        {
            if(min>prices[i])
                min = prices[i];
            else
                max_p = max(max_p, prices[i] - min);
        }
        
        return max_p;
    }
};