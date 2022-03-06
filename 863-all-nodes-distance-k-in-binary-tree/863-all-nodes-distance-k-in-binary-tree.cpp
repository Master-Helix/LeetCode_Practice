/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void parent_mark(TreeNode *root, unordered_map<TreeNode *,TreeNode *>&m)
    {
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
                    m[a->left]=a;
                    q.push(a->left);
                }
                if(a->right)
                {
                    m[a->right]=a;
                    q.push(a->right);
                }
            }
        }
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       unordered_map<TreeNode *,TreeNode *>m;
        unordered_map<TreeNode *,bool>vis;
        
        parent_mark(root,m);
        
        int dist=0;
        queue<TreeNode *>q;
        q.push(target);
        vis[target]=true;
        while(!q.empty())
        {
            int k1=q.size();
            if(dist==k)
            {
                break;
            }
            dist++;
            for(int i=0;i<k1;i++)
            {
                auto a=q.front();
                q.pop();
                if(a->left && !vis[a->left])
                {
                    q.push(a->left);
                    vis[a->left]=true;
                }
                if(a->right && !vis[a->right])
                {
                    q.push(a->right);
                    vis[a->right]=true;
                }
                if(m[a] && !vis[m[a]])
                {
                    q.push(m[a]);
                    vis[m[a]]=true;
                }
            }
        }
        
        
        vector<int>v;
        while(!q.empty())
        {
            v.push_back(q.front()->val);
            q.pop();
        }
        return v;
    }
};