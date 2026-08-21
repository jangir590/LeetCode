class Solution {
public:
    int fun(int idx,int buy ,vector<int>& prices,vector<vector<int>>&dp,int fee){
        if(idx==prices.size()) return 0;
        int profit = 0;
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        if(buy){
            profit = max(-prices[idx] + fun(idx+1,0, prices, dp,fee), 0+fun(idx+1,1, prices, dp,fee));
        }
        else{
            profit =max(prices[idx] - fee +fun(idx+1,1, prices, dp,fee),0+fun(idx+1,0, prices, dp,fee));
        }

        return dp[idx][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
                int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));

        return fun(0,1,prices,dp,fee);
        
    }
};