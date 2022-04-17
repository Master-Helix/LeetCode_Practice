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
    vector<int>v;
    void inorder(vector<int>&v,TreeNode *root)
    {
        if(!root)
            return;
        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
    }
    
    TreeNode *solve(vector<int>&v,int &i)
    {
        if(i==v.size())
            return NULL;
        TreeNode *ans=new TreeNode(v[i++]);
        ans->left=NULL;
        ans->right=solve(v,i);
        return ans;
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        inorder(v,root);
        sort(v.begin(),v.end());
        int i=0;
        return solve(v,i);
    }
};