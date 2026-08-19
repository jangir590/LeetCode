class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        int up = INT_MAX,ld=INT_MAX,rd=INT_MAX;

        for(int j = 0 ;j<n ;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i =1 ;i<n ;i++){
            for(int j=0 ;j<n ;j++){
                int up = 1e9,ld=1e9,rd=1e9;
                up=matrix[i][j] + dp[i-1][j];
                if(j-1>=0){
                    ld=matrix[i][j]+dp[i-1][j-1];
                }
                if(j+1<n){
                    rd=matrix[i][j]+dp[i-1][j+1];
                }

                dp[i][j]=min({up,ld,rd});
            }
        }
        int mini=dp[n-1][0];
        for(int j=1 ;j<n ;j++){
            mini = min(mini,dp[n-1][j]);
        }
        return mini;
    }
};