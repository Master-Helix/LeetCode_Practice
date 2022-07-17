class Solution {
public:
    
    int solve(vector<int>&t){
        int n=t.size();
        vector<int>dp(n,0);
        dp[0]=t[0];
        for(int i=1;i<n;i++){
            int a=dp[i-1];
            int b=t[i];
            if(i>1){
                b=t[i]+dp[i-2];
            }
            dp[i]=max(a,b);
        }
        return dp[n-1];
    }
    
    
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        if(nums.size()<2){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                temp1.push_back(nums[i]);
            }
            if(i!=nums.size()-1){
                temp2.push_back(nums[i]);
            }
        }
     
        int k1=solve(temp1);
        int k2=solve(temp2);
        return max(k1,k2);
    }
};