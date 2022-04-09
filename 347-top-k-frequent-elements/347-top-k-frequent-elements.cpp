class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        for(int x:nums)
        {
            m[x]++;
        }
        
        priority_queue<pair<int,int>>p;
        for(auto it:m)
        {
            p.push({it.second,it.first});
        }
        
        vector<int>v;
        while(k--)
        {
            v.push_back(p.top().second);
            p.pop();
        }
        return v;
    }
};