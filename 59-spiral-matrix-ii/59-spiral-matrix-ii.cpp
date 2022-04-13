class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int val=1;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>a(n,0);
            ans.push_back(a);
        }
        
        
        int right=0,down=0,left=0,top=0;
        while(val<=n*n)
        {
            for(int i=left;i<=n-1-right;i++)
            {
                ans[left][i]=val;
                val++;
            }
            
            for(int j=left+1;j<=n-1-down;j++)
            {
                ans[j][n-1-down]=val;
                val++;
            }
            
            for(int i=n-2-right;i>=left;i--)
            {
                ans[n-1-right][i]=val;
                val++;
            }
            
            for(int i=n-2-top;i>top;i--)
            {
                ans[i][top]=val;
                val++;
            }
            right++;
            left++;
            down++;
            top++;     
        }
        return ans;
    }
};