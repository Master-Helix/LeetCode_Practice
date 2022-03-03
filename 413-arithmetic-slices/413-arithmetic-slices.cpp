class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int ctr=0;
        int sum=0;
        int n=nums.size();
        if(n<3)
            return 0;
        int diff=nums[1]-nums[0];
        ctr+=2;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==diff)
            {
                ctr++;
            }
            else
            {
                if(ctr>2)
                {
                    sum+=((ctr*(ctr+1))/2)-(2*(ctr)-1);
                }
                diff=nums[i]-nums[i-1];
                ctr=2;
            }
        }
        
         if(ctr>2)
         {
             sum+=((ctr*(ctr+1))/2)-(2*(ctr)-1);
         }
        
        return sum;
        
    }
};