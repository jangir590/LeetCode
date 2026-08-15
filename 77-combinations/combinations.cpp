class Solution {
public:
    void TotalComb(int idx,int k , vector<int>&nums , vector<int>&ds , vector<vector<int>>&ans){
        if(ds.size()==k) {
            ans.push_back(ds);
            return ;
        }
        if(idx>=nums.size()) return;
        ds.push_back(nums[idx]);
        TotalComb(idx+1,k,nums,ds,ans);
        ds.pop_back();
        TotalComb(idx+1,k,nums,ds,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        vector<int>nums;
        vector<vector<int>> ans;
        for(int i=1 ; i<=n ;i++){
            nums.push_back(i);

        }
        TotalComb(0,k,nums,ds,ans);
        
        return ans;

        
        
    }
};