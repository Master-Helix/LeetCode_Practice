class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
        vector<int>v;
        int r=matrix.size();
        int c=matrix[0].size();
        int ctr_up=0,ctr_down=0,ctr_left=0,ctr_right=0;
        while(v.size()!=r*c)
        {
            for(int j=ctr_right;j<c-ctr_right;j++)
            {
                v.push_back(matrix[ctr_up][j]);
            }
            ctr_up++;
            if(v.size()==(r*c))
            {
                break;
            }
            for(int i=ctr_up;i<r-ctr_down;i++)
            {
                v.push_back(matrix[i][c-1-ctr_down]);
            }
            ctr_down++;
            if(v.size()==(r*c))
            {
                break;
            }
            for(int j=c-1-ctr_down;j>=ctr_left;j--)
            {
                v.push_back(matrix[r-1-ctr_left][j]);
            }
            ctr_left++;
            if(v.size()==(r*c))
            {
                break;
            }
            for(int i=r-1-ctr_left;i>=ctr_up;i--)
            {
                v.push_back(matrix[i][ctr_right]);
            }
            ctr_right++;
            if(v.size()==(r*c))
            {
                break;
            }
        }
        return v;
    }
};