class Solution {
public:
    
    int partition(vector<int>&nums,int low,int high)
    {
        int pivot=nums[high];
        int i=low-1;
        for(int j=low;j<high;j++)
        {
            if(nums[j]<pivot)
            {
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;
    }
    
    
    int findKthLargest(vector<int>& nums, int k) {
        
        int low=0,high=nums.size()-1;
        int n=nums.size();
        while(low<high)
        {
            int p=partition(nums,low,high);
            if(p==n-k)
                return nums[p];
            else if(p<n-k)
            {
                low=p+1;
            }
            else
            {
                high=p-1;
            }
        }
        return nums[low];
    }
};