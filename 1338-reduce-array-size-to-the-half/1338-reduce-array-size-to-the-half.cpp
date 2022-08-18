class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        priority_queue<pair<int,int>>p;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            int k1=it->first;
            int k2=it->second;
            p.push({k2,k1});
        }
        
        int val=arr.size()/2;
        int ctr=0;
        
        while(!p.empty() && val>0)
        {
            auto p1=p.top();
            p.pop();
            val=val-p1.first;
            ctr++;
        }
        return ctr;
        
    }
};