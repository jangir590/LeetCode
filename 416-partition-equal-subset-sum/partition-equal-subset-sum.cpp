class Solution {
public:

    bool func(int idx,int target,vector<int>&nums,vector<vector<int>>&dp){
        if(target==0) return true;
        if(idx==0) return (nums[0]==target);
        if(dp[idx][target]!=-1) return dp[idx][target];
        bool not_take=func(idx-1,target,nums,dp);
        bool take = false;
        if(target>=nums[idx]){
            take=func(idx-1,target-nums[idx],nums,dp);
        }
        return dp[idx][target]= (take || not_take);
    }
    bool canPartition(vector<int>& nums) {
        int totsum = 0;
        for(int i=0;i<nums.size();i++){
            totsum+=nums[i];
        }
        if(totsum%2)return false;
        int target = totsum/2;
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));
        return func(nums.size()-1,target,nums,dp);

    }
};