class Solution {
public:
    // BC Gaand Phat Gayi..Krne mei
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        
        unordered_set<int>s1(nums.begin(),nums.end());
        unordered_map<int,int>m;
       
        
        int prefix=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            if(m[prefix]>1)
                return true;
            
            if((prefix%k==0) && i!=0)
            {
                return true;
            }
            
            int c=1;
            while(prefix>=(c*k))
            {
                if(m.find(prefix-(c*k))!=m.end())
                {
                    int a=prefix-(c*k);
                    if(m[a]>1)
                    {
                        return true;
                    }
                       if(s1.find(c*k)==s1.end())
                       {
                           return true;
                       }
                }
                c++;
            }
            m[prefix]++;
        }
        return false;
    }
};