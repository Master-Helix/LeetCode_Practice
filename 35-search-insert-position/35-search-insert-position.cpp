class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int ans=0;
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans=max(ans,mid);
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
                ans=max(ans,low);
                
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
        
    }
};