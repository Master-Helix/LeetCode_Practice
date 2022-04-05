class Solution {
public:
    
    int rev(int n)
    {
        int res=0;
        while(n>0)
        {
            res=res*10+(n%10);
            n/=10;
        }
        return res;
    }
    
    int countNicePairs(vector<int>& nums) {
        
        vector<int>v;
        unordered_map<int,int>m;
        long long ans=0;
        for(int x:nums)
        {
            int k=rev(x);
            v.push_back(k);
        }
        
        for(int i=0;i<v.size();i++)
        {
            int diff=nums[i]-v[i];
            ans+=m[diff];
            m[diff]++;
        }
        return ans%1000000007;
        
    }
};