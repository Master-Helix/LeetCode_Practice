class Solution {
public:
    
         int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%2!=0)
        {
            int k=nums[n/2];
            int sum=0;
            for(int i=0;i<nums.size();i++)
            {
                sum+=abs(nums[i]-k);
            }
            return sum;
        }
        else
        {
            int k1=nums[n/2];
            int k2=nums[(n/2)-1];
            int sum1=0,sum2=0;
             for(int i=0;i<nums.size();i++)
            {
                sum1+=abs(nums[i]-k1);
                 sum2+=abs(nums[i]-k2);
            }
            return min(sum1,sum2);
        }
        return 0;
    }
    
};