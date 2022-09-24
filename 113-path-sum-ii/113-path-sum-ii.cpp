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
    
    
    void solve(TreeNode *root, vector<int>&v,vector<vector<int>>&ans,int sum){
        if(!root) return;
        
        if(sum==root->val && !root->left && !root->right){
            v.push_back(root->val);
            ans.push_back(v);
            v.pop_back();
            return;
        }
        v.push_back(root->val);
        solve(root->left,v,ans,sum-root->val);
        solve(root->right,v,ans,sum-root->val);
        v.pop_back();
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(root,v,ans,targetSum);
        return ans;
    }
};