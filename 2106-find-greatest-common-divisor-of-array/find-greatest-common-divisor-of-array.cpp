class Solution {
public:
    int GCD(int a,int b){
        int ans= (b==0)?abs(a):GCD(b,a%b);
        return ans;

    }
    int findGCD(vector<int>& nums) {
        int maxi=-1e8,mini=1e8;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        return GCD(mini,maxi);

        
        
    }
};