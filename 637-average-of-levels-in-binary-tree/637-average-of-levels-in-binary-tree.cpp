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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        vector<double>v;
        while(!q.empty()){
            int k=q.size();
            double sum=0.0;
            for(int i=0;i<k;i++){
                auto a=q.front();
                q.pop();
                sum+=(double)a->val;
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            v.push_back((double)sum/(double)k);
        }
        return v;
    }
};