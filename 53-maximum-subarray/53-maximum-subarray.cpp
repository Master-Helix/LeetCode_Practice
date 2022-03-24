class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max1=0,maxi=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            max1+=nums[i];
            if(max1<0)
            {
                maxi=max(maxi,max1);
                max1=0;
            }
            else
            {
                maxi=max(maxi,max1);
            }
        }
        return maxi;
    }
};