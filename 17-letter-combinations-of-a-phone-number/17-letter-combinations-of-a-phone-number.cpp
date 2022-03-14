class Solution {
public:
    
    void solve(map<int,string>&m,string &ans,vector<string>&ds,string digits,int in)
    {
        if(in==digits.size())
        {
            if(ans.size()>0)
            {
                ds.push_back(ans);
            }
            return;
        }
        string k=m[digits[in]-'0'];
        for(int i=0;i<k.size();i++)
        {
            ans+=k[i];
            solve(m,ans,ds,digits,in+1);
            ans.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        map<int,string>m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        
        string ans="";
        vector<string>ds;
        int in=0;
        solve(m,ans,ds,digits,in);
        return ds;
    }
};