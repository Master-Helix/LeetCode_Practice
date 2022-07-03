class Solution {
public:
    
    int solve(int i,int prev,vector<int>&v,vector<int>&dp){
        if(i==v.size()){
            return 0;
        }
        if(dp[prev+1]!=-1){
            return dp[prev+1];
        }
        
        int maxi=-1e9;
        if(prev==-1 || (v[i]<0 && v[prev]>=0) || (v[i]>=0 && v[prev]<0))
        {
            maxi=max(maxi,1+solve(i+1,i,v,dp));
        }
        maxi=max(maxi,solve(i+1,prev,v,dp));
        return dp[prev+1]=maxi;
    }
    
    
    int wiggleMaxLength(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n,-1);
        if(n<2){
            return n;
        }
        
        vector<int>v;
        for(int i=0;i<n-1;i++){
            int k=nums[i+1]-nums[i];
            if(k!=0){
                v.push_back(k);
            }
        }
        return 1+solve(0,-1,v,dp);
    }
};