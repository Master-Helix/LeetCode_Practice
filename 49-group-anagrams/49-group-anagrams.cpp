class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int>,vector<string>>m;
        for(string s:strs)
        {
            vector<int>v(256,0);
            for(auto it:s)
            {
                v[it]++;
            }
            m[v].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};