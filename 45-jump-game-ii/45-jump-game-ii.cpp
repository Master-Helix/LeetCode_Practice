class Solution {
public:
    
    int solve(int i,vector<int>&nums,vector<int>&dp){
        if(i==nums.size()-1) return 0;
        if(i>=nums.size()) return 1e9;
        if(nums[i]==0) return 1e9;
        if(dp[i]!=-1) return dp[i];
        
        int mini=1e9;
        for(int j=i+1;j<=i+nums[i];j++){
            int ans=1+solve(j,nums,dp);
            mini=min(mini,ans);
        }
        return dp[i]=mini;
    }
    
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(0,nums,dp);
    }
};