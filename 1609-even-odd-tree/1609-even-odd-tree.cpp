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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int k=q.size();
            int val=0;
            for(int i=0;i<k;i++)
            {
                auto a=q.front();
                q.pop();
                if(level%2==0)
                {
                    if(a->val%2==0)
                    {
                        return false;
                    }
                    else
                    {
                        if(val==0)
                        {
                            val=a->val;
                        }
                        else
                        {
                            if(a->val<=val)
                            {
                                return false;
                            }
                            else
                            {
                                val=a->val;
                            }
                        }
                    }
                }
                else
                {
                    if(a->val%2!=0)
                    {
                        return false;
                    }
                    else
                    {
                        if(val==0)
                        {
                            val=a->val;
                        }
                        else
                        {
                            if(val<=a->val)
                            {
                                return false;
                            }
                            else
                            {
                                val=a->val;
                            }
                        }
                    }
                }
                
                if(a->left)
                {
                    q.push(a->left);
                }
                if(a->right)
                {
                    q.push(a->right);
                }
            }
            level++;
        }
        return true;
    }
};