class Solution {
public:
    string removeDuplicateLetters(string s) {
        
       vector<int>vis(26,0);
        vector<int>arr(26,0);
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        
        string res="";
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']--;
            if(!vis[s[i]-'a'])
            {
                while(res.size()> 0 && res.back()> s[i] && arr[res.back()-'a'] > 0)
                {
                    vis[res.back()-'a']=0;
                    res.pop_back();
                }
                res+=s[i];
                vis[s[i]-'a']=1;
            }
        }
        return res;
    }
                        
};