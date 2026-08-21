class Solution {
public:
    int fun(int idx,int buy ,vector<int>& prices,vector<vector<vector<int>>>&dp,int count){
        if(count==0) return 0;
        if(idx==prices.size()) return 0;
        int profit = 0;
        if(dp[idx][buy][count]!=-1) return dp[idx][buy][count];
        if(buy){
            profit = max(-prices[idx]+fun(idx+1,0, prices, dp,count), 0+fun(idx+1,1, prices, dp,count));
        }
        else{
            profit =max(prices[idx]+fun(idx+1,1, prices, dp,count-1),0+fun(idx+1,0, prices, dp,count));
        }

        return dp[idx][buy][count]=profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));

        return fun(0,1,prices,dp,2);

        
    }
};