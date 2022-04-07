class Solution {
public:
    
    void rotate(vector<vector<int>>&mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        for(int i=0;i<mat.size();i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        for(int i1=0;i1<4;i1++)
        {
            int flag=0;
            for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[i].size();j++)
                {
                    if(mat[i][j]!=target[i][j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                rotate(mat);
            if(flag==0)
                return true;
        }
        return false;
    }
};