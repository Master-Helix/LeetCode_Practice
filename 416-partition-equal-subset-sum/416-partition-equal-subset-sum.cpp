class Solution {
public:
    
    bool solve(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
        
        
        if(i==0){
            if(j==nums[0]) return true;
            return false;
        }
        if(j==0) return true;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        bool a=solve(i-1,j,nums,dp);
        bool b=false;
        if(j>=nums[i]){
            b=solve(i-1,j-nums[i],nums,dp);
            return dp[i][j]=a|b;
        }
        return dp[i][j]=a||b;
    }
    
    
    bool canPartition(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        
        if(sum%2!=0) return false;
        
        vector<vector<int>>dp(n,vector<int>((sum/2)+1,-1));
        
        return solve(n-1,sum/2,nums,dp);
        
        
    }
};