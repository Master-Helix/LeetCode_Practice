class Solution {
public:
     int longestSubarray(vector<int>& nums) {
        int pre=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
            {
            if(nums[i]==1)
                {
                pre++;
            }
            else{
                v.push_back(pre);
                pre=0;
            }
        }
        if(pre!=0){
            v.push_back(pre);
        }
        
       int maxi=0;
         if(v.size()==1)
             return v[0]-1;
         for(int i=0;i<v.size();i++)
         {
             int a;
             if(i==0)
             {
                 a=v[i]+v[i+1];
             }
             else if(i==v.size()-1)
             {
                 a=v[i]+v[i-1];
             }
             else
             {
                 a=v[i]+max(v[i+1],v[i-1]);
             }
             maxi=max(maxi,a);
         }
         return maxi;
       
    }
};