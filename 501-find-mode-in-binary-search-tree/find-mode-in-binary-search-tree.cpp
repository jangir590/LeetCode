/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>nums;
        inorder(root,nums);
        if(nums.size()==1)return nums;
        vector<int>result;
        unordered_map<int,int>mp;
        int maxfreq = 0;
        for(int num:nums){
            mp[num]++;
            maxfreq=max(maxfreq,mp[num]);
        }
        for(const auto&pair:mp){
            if(pair.second==maxfreq){
                result.push_back(pair.first);
            }
        }
        return result;
    }
    
};