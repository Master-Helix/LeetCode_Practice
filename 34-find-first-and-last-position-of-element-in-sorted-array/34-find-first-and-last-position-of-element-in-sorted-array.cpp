class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=INT_MAX;
        int last=INT_MIN;
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                first=min(first,mid);
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        if(first==INT_MAX)
        {
            return {-1,-1};
        }
        
        low=0,high=n-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                last=max(last,mid);
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        return {first,last};
    }
};