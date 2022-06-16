class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp){
        
        if(j<0 || j>=matrix.size()){
            return 1e9;
        }
        if(i==matrix.size()-1){
          return matrix[i][j];
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int down=matrix[i][j]+solve(i+1,j,matrix,dp);
        int left_d=matrix[i][j]+solve(i+1,j-1,matrix,dp);
        int right_d=matrix[i][j]+solve(i+1,j+1,matrix,dp);
        return dp[i][j]=(min(down,min(left_d,right_d)));
    }
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        int maxi=1e9;
        
        for(int i=0;i<n;i++){
            vector<vector<int>>dp(n,vector<int>(n,-1));
            int k=solve(0,i,matrix,dp);
            maxi=min(maxi,k);
        }
        return maxi;
        
        
    }
};