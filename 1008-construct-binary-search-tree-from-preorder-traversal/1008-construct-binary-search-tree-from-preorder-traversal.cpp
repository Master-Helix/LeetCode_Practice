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
    
    TreeNode *solve(vector<int>&preorder,int &i,int bound)
    {
        if(i==preorder.size() || preorder[i]>bound) // all elements or root greater than max
            return NULL;
        TreeNode *root=new TreeNode(preorder[i]);
        i++;
        root->left=solve(preorder,i,root->val); //left side the max value will be parent
        root->right=solve(preorder,i,bound); // the right side max value will always be bound(INT_MAX)
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return solve(preorder,i,INT_MAX);
    }
};