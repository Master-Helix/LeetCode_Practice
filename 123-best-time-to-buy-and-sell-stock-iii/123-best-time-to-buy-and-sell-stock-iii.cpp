class Solution {
public:
    
    int solve(int i,int j,vector<int>&prices,vector<vector<int>>&dp){
      
        if(i==prices.size() || j==4){
            return 0;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(j%2==0){
            int a=-prices[i]+solve(i+1,j+1,prices,dp);
            int b=solve(i+1,j,prices,dp);
            return dp[i][j]=max(a,b);
        }
        int a=prices[i]+solve(i+1,j+1,prices,dp);
        int b=solve(i+1,j,prices,dp);
        return dp[i][j]=max(a,b);
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return solve(0,0,prices,dp);
        
    }
};