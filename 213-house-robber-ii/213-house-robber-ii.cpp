class Solution {
public:
    int maximumNonAdjacentSum(vector<int> &nums){

    int n=nums.size();
    vector<int>dp(n,0);
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int left=nums[i];
        int right;
        if(i>1){
            left=nums[i]+dp[i-2];
        }
        right=dp[i-1];
        dp[i]=max(left,right);
    }
    return dp[n-1];
}

    int rob(vector<int>& value) {
        vector<int>temp1,temp2;
    int n=value.size();
    
    // if only one elemet , so no adjacent
    
    if(n==1){
        return value[0];
    }
    
    for(int i=0;i<n;i++){
        if(i!=0){
            temp1.push_back(value[i]);
        }
        if(i!=n-1){
            temp2.push_back(value[i]);
        }
    }
    return max(maximumNonAdjacentSum(temp1),maximumNonAdjacentSum(temp2));
    }
};