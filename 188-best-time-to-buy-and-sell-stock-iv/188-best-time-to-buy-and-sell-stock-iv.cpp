class Solution {
public:
    
     int solve(int i,int j,int k,vector<int>&prices,vector<vector<int>>&dp){
      
        if(i==prices.size() || j==2*k){
            return 0;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(j%2==0){
            int a=-prices[i]+solve(i+1,j+1,k,prices,dp);
            int b=solve(i+1,j,k,prices,dp);
            return dp[i][j]=max(a,b);
        }
        int a=prices[i]+solve(i+1,j+1,k,prices,dp);
        int b=solve(i+1,j,k,prices,dp);
        return dp[i][j]=max(a,b);
    }
    
    
    int maxProfit(int k, vector<int>& prices) {
        
         int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2*k,-1));
        return solve(0,0,k,prices,dp);
        
        
    }
};