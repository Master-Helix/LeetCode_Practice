class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        map<int,vector<int>>m;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                int k=i+j;
                m[k].push_back(mat[i][j]);
            }
        }
        
        vector<int>v;
        int flag=0;
        for(auto it:m)
        {
            if(flag==0)
            {
                for(int i=it.second.size()-1;i>=0;i--)
                {
                    v.push_back(it.second[i]);
                }
                flag=1;
            }
            else
            {
                for(int i=0;i<it.second.size();i++)
                {
                    v.push_back(it.second[i]);
                }
                flag=0;
            }
        }
        return v;
    }
};