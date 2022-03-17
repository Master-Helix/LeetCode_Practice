class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int start=i+1;
            int end=nums.size()-1;
            while(start<end)
            {
                if(nums[start]+nums[end]==-a)
                {
                    vector<int>v;
                    v.push_back(a);
                    v.push_back(nums[start]);
                    v.push_back(nums[end]);
                    ans.push_back(v);
                    
                    while(start<end && nums[start]==v[1])
                        start++;
                    while(start<end && nums[end]==v[2])
                        end--;
                }
                else if(nums[start]+nums[end]>-a)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])
            {
                i++;
            }
        }
        return ans;
    }
};