class Solution {
public:
    
    int solve(int i,int j,vector<int>&prices,vector<vector<int>>&dp,int fee){
        if(i==prices.size()) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int maxi=0;
        if(j==0){
            maxi=max(maxi,-prices[i]+solve(i+1,1,prices,dp,fee));
            maxi=max(maxi,solve(i+1,j,prices,dp,fee));
            return dp[i][j]=maxi;
        }
        maxi=max(maxi,-fee+prices[i]+solve(i+1,0,prices,dp,fee));
        maxi=max(maxi,solve(i+1,j,prices,dp,fee));
        return dp[i][j]=maxi;
    }
    
    
    int maxProfit(vector<int>& prices, int fee) {
        
        
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return solve(0,0,prices,dp,fee);
    }
};