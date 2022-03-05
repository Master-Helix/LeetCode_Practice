class Solution {
public:
    long long smallestNumber(long long num) {
        
        int flag=0;
        if(num<0)
        {
            flag=1;
        }
        
        vector<int>v;
        long long m=abs(num);
        while(m>0)
        {
            v.push_back(m%10);
            m/=10;
        }
        
        if(count(v.begin(),v.end(),0)==v.size())
            return num;
        
        if(flag==0)
        {
            sort(v.begin(),v.end());
        }
        else
        {
            sort(v.begin(),v.end(),greater<int>());
        }
        
        long long ans=0;
        if(v[0]==0)
        {
            for(int i=1;i<v.size();i++)
            {
                if(v[i]!=0)
                {
                    swap(v[0],v[i]);
                    break;
                }
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            ans=ans*10+v[i];
        }
        
        if(flag==1)
            return (-1)*ans;
        return ans;
        
    }
};