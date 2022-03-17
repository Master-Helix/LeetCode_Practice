class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            if(m.find(target-a)!=m.end())
            {
                return {i,m[target-a]};
            }
            m[a]=i;
        }
        return {-1,-1};
    }
};