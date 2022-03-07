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
    bool isCousins(TreeNode* root, int x, int y) {
        map<int,vector<int>>m;
        int level=0;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty())
        {
            int k=q.size();
            for(int i=0;i<k;i++)
            {
                auto a=q.front();
                q.pop();
                if(a->left)
                {
                    m[a->left->val]={a->val,level};
                    q.push(a->left);
                }
                if(a->right)
                {
                    m[a->right->val]={a->val,level};
                    q.push(a->right);
                }
            }
            level++;
        }
        
        if(m.find(x)==m.end() || m.find(y)==m.end())
            return false;
        
        auto a=m[x];
        auto b=m[y];
        if(a[0]==b[0])
            return false;
        if(a[1]!=b[1])
            return false;
        return true;
        
    }
};