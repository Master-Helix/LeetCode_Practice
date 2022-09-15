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
    
    bool check(vector<int> &v){
      map<int,int>m;
        for(auto it:v){
            m[it]++;
        }
        int flag=0;
        for(auto it:m){
            if(flag>1) return false;
            if((it.second)%2!=0)
            {
                flag++;
            }
        }
        return true;
    }
    
    void solve(TreeNode *root, unordered_map<int,int>&m,int &ctr){
        
        
        m[root->val]++;
        if(!root->left && !root->right){
           int flag=0;
            for(auto it:m){
                if(it.second%2!=0){
                    flag++;
                }
            }
            if(flag<=1) ctr++;
            m[root->val]--;
            return;
        }
        
        if(root->left) solve(root->left,m,ctr);
        if(root->right) solve(root->right,m,ctr);
        m[root->val]--;
        
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        unordered_map<int,int>m;
        
        if(!root) return 0;
        int ctr=0;
        solve(root,m,ctr);
        return ctr;
    }
};