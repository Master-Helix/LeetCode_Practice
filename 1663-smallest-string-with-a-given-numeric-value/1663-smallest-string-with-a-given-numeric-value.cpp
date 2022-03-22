class Solution {
public:
    string getSmallestString(int n, int k) {
        
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(1);
        }
        k-=n;
        int j=n-1;
        while(k>0)
        {
            if(k>=25)
            {
                v[j]+=25;
                k-=25;
            }
            else
            {
                v[j]+=k;
                k=0;
            }
            j--;
        }
        
        string s1="abcdefghijklmnopqrstuvwxyz";
        string s="";
        for(int x:v)
        {
            s+=s1[x-1];
        }
        return s;
    }
};