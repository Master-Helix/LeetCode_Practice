class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]<b[0];
    }
    
    int solve(int i,int prev,vector<vector<int>>&pairs,vector<vector<int>>&dp){
        if(i==pairs.size()){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int maxi=-1e9;
        if(prev==-1 || pairs[i][0]>pairs[prev][1]){
            maxi=max(maxi,1+solve(i+1,i,pairs,dp));
        }
        maxi=max(maxi,solve(i+1,prev,pairs,dp));
        return dp[i][prev+1]=maxi;
    }
    
    
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end(),cmp);
        vector<vector<int>>dp(pairs.size(),vector<int>(pairs.size(),-1));
        return solve(0,-1,pairs,dp);
    }
};