class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        
        int n=nums.size()-1;
        int a=min(n,k);
        for(int i=0;i<=a;i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>1)
                return true;
        }
        
        for(int i=k+1;i<nums.size();i++)
        {
            m[nums[i]]++;
            m[nums[i-k-1]]--;
            if(m[nums[i]]>1)
                return true;
        }
        
       return false;
    }
};