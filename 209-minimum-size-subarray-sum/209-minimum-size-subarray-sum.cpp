class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=1;
        
        int ans=1e9;
        if(nums[0]>=target){
            ans=1;
        }
        
        int n=nums.size();
        int sum=nums[0];
        while(i<n){
            if(j>=n) break;
             sum+=nums[j];
            if(sum==target){
                ans=min(ans,j-i+1);
                j++;
            }
            else if(sum<target){
                    j++;
                }
                
                else{
                    
                    while(sum>target && i<=j){
                        ans=min(ans,j-i+1); 
                        sum-=nums[i++];
                        
                    }
                    if(sum==target){
                        ans=min(ans,j-i+1);
                    }
                   j++;
                }
            }
        
       if(ans==1e9) return 0;
        return ans;
        
    }
};