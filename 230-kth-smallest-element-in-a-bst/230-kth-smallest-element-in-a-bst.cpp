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
    
    void inorder(TreeNode *root, int k,int &val,int &ctr)
    {
        if(!root)
            return;
        inorder(root->left,k,val,ctr);
        ctr++;
        if(ctr==k)
            val=root->val;
        inorder(root->right,k,val,ctr);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        int val=-1;
        int ctr=0;
        inorder(root,k,val,ctr);
        return val;
    }
};