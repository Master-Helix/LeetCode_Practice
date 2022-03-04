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
    
    void solve(TreeNode *root, int &sum)
    {
        if(!root)
        {
            return;
        }
        
        if(root->left)
        {
            if(root->left->left)
            {
                if(root->val%2==0)
                {
                    sum+=root->left->left->val;
                }
            }
             if(root->left->right)
            {
                if(root->val%2==0)
                {
                    sum+=root->left->right->val;
                }
            }
        }
        
        if(root->right)
        {
            if(root->right->left)
            {
                if(root->val%2==0)
                {
                    sum+=root->right->left->val;
                }
            }
             if(root->right->right)
            {
                if(root->val%2==0)
                {
                    sum+=root->right->right->val;
                }
            }
        }
        
        solve(root->left,sum);
        solve(root->right,sum);
            
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        
        int sum=0;
        solve(root,sum);
        return sum;
        
    }
};