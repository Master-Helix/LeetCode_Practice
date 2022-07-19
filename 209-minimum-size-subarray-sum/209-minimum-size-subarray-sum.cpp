class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int maxi=1e9;
        int i=0,j=1;
        if(nums[0]>=target){
            maxi=1;
        }
        
        int sum=nums[0];
        
        while(i<n && i<=j){
            if(j>=n) break;
            sum+=nums[j];
            if(sum==target){
                maxi=min(maxi,j-i+1);
                j++;
            }
            else if(sum<target)
            {
                
                j++;
                continue;
            }
            else{
            while(sum>target && i<=j){
                maxi=min(maxi,j-i+1);
                sum-=nums[i++];
               
            }
                 if(sum==target){
                    maxi=min(maxi,j-i+1);
                }
                j++;
            }
        }
        if(maxi==1e9) return 0;
        return maxi;
    }
};