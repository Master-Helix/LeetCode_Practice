class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int val=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            int a=nums[i];
            int start=i+1;
            int end=nums.size()-1;
            while(start<end)
            {
                
                if(nums[start]+nums[end]+a==target)
                {
                    return target;
                }
                else if(nums[start]+nums[end]+a>target)
                {
                    int k=nums[start]+nums[end]+a-target;
                    if(k<mini)
                    {
                        mini=k;
                        val=k+target;
                    }
                    end--;
                }
                else
                {
                    int k=target-(nums[start]+nums[end]+a);
                    if(k<mini)
                    {
                        mini=k;
                        val=(-1)*k+target;
                    }
                    start++;
                }
            }
        }
            return val;
    }
};