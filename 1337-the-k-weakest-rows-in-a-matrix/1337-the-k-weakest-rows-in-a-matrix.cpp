class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>>p;
        for(int i=0;i<mat.size();i++)
        {
            int a=count(mat[i].begin(),mat[i].end(),1);
            p.push({a,i});
        }
        
        while(p.size()>k)
        {
            p.pop();
        }
        vector<int>ans;
       while(!p.empty())
       {
           ans.push_back(p.top().second);
           p.pop();
       }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};