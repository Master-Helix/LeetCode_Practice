class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
         unordered_map<int,priority_queue<int,vector<int>,greater<int>>>m;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                m[i-j].push(mat[i][j]);
            }
        }
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int k=i-j;
                int a=m[k].top();
                m[k].pop();
                mat[i][j]=a;
            }
        }
        return mat;
    }
};