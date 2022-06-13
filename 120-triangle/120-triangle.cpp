class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>&triangle,vector<vector<int>>&dp){
        
        if(j<0 || j>=triangle[i].size()){
            return 1e9;
        }
        if(i==triangle.size()-1){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down=solve(i+1,j,triangle,dp);
        int diag=solve(i+1,j+1,triangle,dp);
        return dp[i][j]=triangle[i][j]+min(down,diag);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return solve(0,0,triangle,dp);
    }
};