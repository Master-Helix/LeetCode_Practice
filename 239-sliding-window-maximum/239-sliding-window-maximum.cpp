class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int>q;
        for(int i=0;i<k;i++)
        {
            while(!q.empty() && nums[i]>=nums[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        
        vector<int>v;
        for(int i=k;i<nums.size();i++)
        {
            v.push_back(nums[q.front()]);
            while(!q.empty() && q.front()<=(i-k))
                q.pop_front();
            while(!q.empty() && nums[i]>=nums[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        v.push_back(nums[q.front()]);
        return v;
        
    }
};