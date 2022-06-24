class Solution {
public:
    
    int solve(int i,vector<int>&prices,int buy,vector<vector<int>>&dp){
        if(i==prices.size()){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        if(buy==1){
            return dp[i][buy]=max(-prices[i]+solve(i+1,prices,0,dp),solve(i+1,prices,1,dp));
        }
        return dp[i][buy]=max(prices[i]+solve(i+1,prices,1,dp),solve(i+1,prices,0,dp));
    }
    
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return solve(0,prices,1,dp);
    }
};