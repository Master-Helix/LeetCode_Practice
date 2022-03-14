class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                v.push_back(i);
        }
        
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            int a=INT_MAX;
            for(int x:v)
            {
                a=min(a,abs(i-x));
            }
            ans.push_back(a);
        }
        return ans;
    }
};