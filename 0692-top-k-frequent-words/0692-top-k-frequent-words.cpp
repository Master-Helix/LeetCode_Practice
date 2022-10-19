class Solution {
    
    private:
    struct cmp{
     bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
    
public:
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(string x:words)
        {
            m[x]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>p;
        for(auto it:m)
        {
            p.push({it.second,it.first});
            if(p.size()>k)
                p.pop();
        }
        
        vector<string>ans;
        while(!p.empty())
        {
            ans.push_back(p.top().second);
            p.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};