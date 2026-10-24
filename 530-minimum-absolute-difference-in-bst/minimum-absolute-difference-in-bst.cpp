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
        if(root==NULL)return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        sort(ans.begin(),ans.end());
        int md=1e9;
        for(int i=0;i<ans.size()-1;i++){
            int diff=abs(ans[i]-ans[i+1]);
            md=min(md,diff);
        }
        return md;
    }
};