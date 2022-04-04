class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int>ans;
        stack<int>s;
        int n=nums.size();
        
        for(int i=n-2;i>=0;i--)
        {
            s.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                ans.push_back(s.top());
            }
            else
            {
                ans.push_back(-1);
            }
            s.push(nums[i]);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};