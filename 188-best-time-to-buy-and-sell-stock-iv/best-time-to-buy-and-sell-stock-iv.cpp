class Solution {
public:
    int fun(int idx,int buy ,vector<int>& prices,vector<vector<vector<int>>>&dp,int k){
        if(k==0) return 0;
        if(idx==prices.size()) return 0;
        int profit = 0;
        if(dp[idx][buy][k]!=-1) return dp[idx][buy][k];
        if(buy){
            profit = max(-prices[idx]+fun(idx+1,0, prices, dp,k), 0+fun(idx+1,1, prices, dp,k));
        }
        else{
            profit =max(prices[idx]+fun(idx+1,1, prices, dp,k-1),0+fun(idx+1,0, prices, dp,k));
        }

        return dp[idx][buy][k]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));

        return fun(0,1,prices,dp,k);
        
    }
};