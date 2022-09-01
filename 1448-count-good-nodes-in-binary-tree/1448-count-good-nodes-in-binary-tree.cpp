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
    
    void solve(TreeNode *root, int maxi,int &ctr){
        if(!root) return;
        if(root->val>=maxi){
            ctr++;
            maxi=root->val;
        }
        solve(root->left,maxi,ctr);
        solve(root->right,maxi,ctr);
    }
    
    
    int goodNodes(TreeNode* root) {
        
        int ctr=0;
        solve(root,root->val,ctr);
        return ctr;
    }
};