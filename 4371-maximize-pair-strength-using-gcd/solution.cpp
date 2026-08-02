class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                long long denom = gcd((long long)nums[i],(long long)nums[j]);
                long long num = (long long)nums[i]*(long long)nums[j];
                long long result = num/(denom*denom);
                if(result>ans) ans = result;
            }
        }
        return ans;   
    }
};
