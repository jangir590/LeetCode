class Solution {
public:
    void totalset(int idx , vector<int>& nums ,vector<int>& ds,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }

        ds.push_back(nums[idx]);
        totalset(idx+1,nums,ds,ans);
        ds.pop_back();
        totalset(idx+1,nums,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>> ans;
        totalset(0,nums,ds,ans);
        return ans;
        
    }
};
