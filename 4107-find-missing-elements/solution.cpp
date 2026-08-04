class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty()) return {};
        
        int n =nums.size()-1;
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[n];
        vector<int>ans(maxi+1,0);
        vector<int> missingNumber;

        for(int i=0;i<=n;i++){
            ans[nums[i]]++;
        } 
        for(int i =mini; i<=maxi ;i++){
            if(ans[i]==0){
                missingNumber.push_back(i);
            }
        } 
        return missingNumber;



    }
};
