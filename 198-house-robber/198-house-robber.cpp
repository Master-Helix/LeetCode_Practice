class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int left=nums[i];
            int right=dp[i-1];
            if(i>1){
                left+=dp[i-2];
            }
            dp[i]=max(left,right);
        }
        return dp[n-1];
    }
};