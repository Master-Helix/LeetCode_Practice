class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,ctr);
            if(nums[i]==1)
            {
                ctr++;
            }
            else
            {
                ctr=0;
            }
        }
        maxi=max(maxi,ctr);
        return maxi;
    }
};