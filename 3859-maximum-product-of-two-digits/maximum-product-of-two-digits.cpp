class Solution {
public:
    int maxProduct(int n) {
        int num =n;
        vector<int> dp;

        while(num>0){
            int rem = num%10;
            dp.push_back(rem);
            num/=10;
        }
        sort(dp.begin(),dp.end());
        int a = dp.size();

        return (dp[a-1]*dp[a-2]);


        
    }
};