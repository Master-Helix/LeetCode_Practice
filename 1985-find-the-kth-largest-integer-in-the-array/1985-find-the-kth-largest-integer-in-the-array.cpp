class Solution {
public:
    
    static bool cmp(pair<int,string>&a,pair<int,string>&b)
    {
        if(a.first==b.first)
        {
            for(int i=0;i<a.first;i++)
            {
                if(a.second[i]!=b.second[i])
                {
                    return a.second[i]>b.second[i];
                }
            }
        }
        return a.first>b.first;
    }
    
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        vector<pair<int,string>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i].size(),nums[i]});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        return v[k-1].second;
    }
};