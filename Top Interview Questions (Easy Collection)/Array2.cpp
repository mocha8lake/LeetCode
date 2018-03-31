// 122. Best Time to Buy and Sell Stock II

// Say you have an array for which 
// the ith element is the price of a given stock on day i.

// Design an algorithm to find the maximum profit. 
// You may complete as many transactions as you like 
// (ie, buy one and sell one share of the stock multiple times).
// However, you may not engage in multiple transactions at the same time 
// (ie, you must sell the stock before you buy again).

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int profit=0;
        
        if(len==0||len==1)
            return 0;
        
        for(int i=0;i<len-1;i++)
        {
            if(prices[i]<prices[i+1])
                profit+=prices[i+1]-prices[i];
        }
        
        return profit;
    }
};

// Submission Detail
// 198 / 198 test cases passed.
// Runtime: 8 ms
// Your runtime beats 72.17 % of cpp submissions.
