class Solution {
public:
    
  int solve(vector<int>&nums,int target,vector<int>&dp){
    
      if(target==0) return 1;
      if(target<0) return 0;
      
      if(dp[target]!=-1) return dp[target];
      
      int ans=0;
      
      for(int j=0;j<nums.size();j++){
          ans+=solve(nums,target-nums[j],dp);
      }
      
      return dp[target]=ans;
  }
    
    
    int combinationSum4(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<int>dp(target+1,-1);
        return solve(nums,target,dp);
    }
};