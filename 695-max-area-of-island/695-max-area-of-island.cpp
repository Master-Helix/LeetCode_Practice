class Solution {
public:
    
    void dfs(int i,int j,int m,int n,vector<vector<int>>&grid,int &ctr){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=1){
            return;
        }
        grid[i][j]=0;
        ctr++;
        dfs(i-1,j,m,n,grid,ctr);
        dfs(i,j-1,m,n,grid,ctr);
        dfs(i+1,j,m,n,grid,ctr);
        dfs(i,j+1,m,n,grid,ctr);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        int maxi=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    int ctr=0;
                    dfs(i,j,m,n,grid,ctr);
                    maxi=max(maxi,ctr);
                }
            }
        }
        return maxi;
    }
};