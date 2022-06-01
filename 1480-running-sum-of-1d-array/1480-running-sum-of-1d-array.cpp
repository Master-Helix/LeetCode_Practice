class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum=0;
        vector<int>v;
        for(int x:nums)
        {
            sum+=x;
            v.push_back(sum);
        }
        return v;
    }
};