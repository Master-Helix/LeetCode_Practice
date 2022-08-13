class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
       string check="";
        
        for(auto it:words)
        {
            check+=it;
        }
        
        vector<int>v;
        int k=check.size();
        for(int i=0;i<s.size()-check.size()+1;i++)
        {
            string ans=s.substr(i,check.size());
            int j=0;
            unordered_map<string,int>m;
            int flag=0;
            while(j<=ans.size())
            {
                string k=ans.substr(j,words[0].size());
                m[k]++;
                j=j+words[0].size();
            }
            
            for(auto it:words)
            {
                if(m[it]==0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    m[it]--;
                }
            }
            
            if(flag==0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};