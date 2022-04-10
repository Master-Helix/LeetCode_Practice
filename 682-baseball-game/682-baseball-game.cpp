class Solution {
public:
    
    int convert(string &s1)
    {
        int n1=0;
        int flag=0;
        if(s1[0]=='-')
            flag=1;
        if(flag==0)
        {
            for(int i=0;i<s1.size();i++)
            {
                n1=n1*10+(s1[i]-'0');
            }
        }
        else
        {
            for(int i=1;i<s1.size();i++)
            {
                n1=n1*10+(s1[i]-'0');
            }
            n1=-1*n1;
        }
        return n1;
    }
    int calPoints(vector<string>& ops) {
        
        stack<int>s;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
                s.pop();
            else if(ops[i]=="D")
                s.push(2*s.top());
            else if(ops[i]=="+")
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else
            {
                s.push(convert(ops[i]));
            }
        }
        
        int sum=0;
        while(!s.empty())
        {
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};