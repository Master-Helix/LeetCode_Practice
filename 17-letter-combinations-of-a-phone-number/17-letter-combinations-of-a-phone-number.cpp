class Solution {
public:
    
    void solve(string digits,map<int,string>&m,vector<string>&v,string &s,int in)
    {
        if(in==digits.size())
        {
            v.push_back(s);
            return;
        }
        int a=digits[in]-'0';
        for(int i=0;i<m[a].size();i++)
        {
            s+=m[a][i];
            solve(digits,m,v,s,in+1);
            s.pop_back();
        }
    }
    
    
    vector<string> letterCombinations(string digits) {
        
        map<int,string>m;
        m[2]="abc",m[3]="def",m[4]="ghi",m[5]="jkl",m[6]="mno",m[7]="pqrs",m[8]="tuv",m[9]="wxyz";
        
        if(digits.size()==0)
            return {};
        vector<string>v;
        string s="";
        int in=0;
        
        solve(digits,m,v,s,in);
        return v;
    }
};