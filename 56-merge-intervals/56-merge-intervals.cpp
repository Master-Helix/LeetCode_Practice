class Solution {
public:
    
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]<b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),cmp);
        
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++)
        {
            if(i==0)
            {
                ans.push_back(intervals[i]);
            }
            else{
            int x=intervals[i][0];
            int y=intervals[i][1];
            vector<int>v=ans[ans.size()-1];
            int v1=v[0];
            int v2=v[1];
            if(v1<=x && x<=v2)
            {
                ans[ans.size()-1][0]=min(x,v1);
                ans[ans.size()-1][1]=max(y,v2);
            }
            else
            {
                ans.push_back({x,y});
            }
            }
        }
        return ans;
        
    }
};