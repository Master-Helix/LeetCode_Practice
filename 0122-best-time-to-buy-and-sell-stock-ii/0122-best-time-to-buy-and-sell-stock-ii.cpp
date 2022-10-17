class Solution {
public:
    
    int solve(int i,vector<int>&prices,int b,vector<vector<int>>&dp){
        if(i==prices.size()) return 0;
        
        if(dp[i][b]!=-1) return dp[i][b];
        
        int maxi=0;
        if(b==0){
            maxi=max(maxi,solve(i+1,prices,b,dp));
            maxi=max(maxi,-prices[i]+solve(i+1,prices,1,dp));
            return dp[i][b]=maxi;
        }
        maxi=max(maxi,solve(i+1,prices,b,dp));
        maxi=max(maxi,prices[i]+solve(i+1,prices,0,dp));
        return dp[i][b]=maxi;
    }
    
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return solve(0,prices,0,dp);
        
    }
};