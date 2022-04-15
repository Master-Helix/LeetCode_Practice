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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        if(!root)
            return NULL;
        TreeNode *ans=NULL;
        if(root->val>=low && root->val<=high)
        {
            ans=new TreeNode(root->val);
        }
        if(ans==NULL)
        {
            ans=trimBST(root->left,low,high);
            if(ans==NULL)
            {
                 ans=trimBST(root->right,low,high);
            }
        }
        else
        {
            ans->left=trimBST(root->left,low,high);
            ans->right=trimBST(root->right,low,high);
        }
        
        return ans;
        
        
        
    }
};