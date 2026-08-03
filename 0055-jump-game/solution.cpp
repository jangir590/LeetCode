class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi =0;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(i>maxi)return false;
            ans=nums[i]+i;
            maxi=max(ans,maxi);
        }
        return true;
        
        
    }
};
