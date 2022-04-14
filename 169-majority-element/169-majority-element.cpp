class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int res=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[res])
                count++;
            else
                count--;
            if(count==0)
            {
                count=1;
                res=i;
            }
        }
        
        //checking
        int ctr=0;
        for(int x:nums)
        {
            if(x==nums[res])
            {
                ctr++;
            }
        }
        
        if(ctr>nums.size()/2)
            return nums[res];
        return -1;
    }
};