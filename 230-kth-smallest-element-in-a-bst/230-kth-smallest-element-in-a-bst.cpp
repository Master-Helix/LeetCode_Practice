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
    
    void solve(TreeNode *root,int &k,priority_queue<int> &p)
    {
        if(!root)
            return;
        solve(root->left,k,p);
        p.push(root->val);
        if(p.size()>k)
            p.pop();
        solve(root->right,k,p);
    }
    
    int kthSmallest(TreeNode* root, int k) {
       priority_queue<int>p;
        
        solve(root,k,p);
        return p.top();
    }
    
};