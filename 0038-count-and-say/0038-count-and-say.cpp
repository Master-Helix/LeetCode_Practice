class Solution {
public:
    string countAndSay(int n) {
         string s="1";
        for(int i=1;i<n;i++)
        {
            string ans="";
            for(int i=0;i<s.size();)
            {
                int k=0;
                char c=s[i];
                for(int j=i;j<s.size();j++)
                {   
                    if(s[j]==c)
                        k++;
                    else
                        break;
                }
                i+=k;
                ans+=to_string(k);
                ans+=c;
            }
            s=ans;
        }
        return s;
    }
};