class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=-1e9,mini=1e9;
        int in1=-1,in2=-1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                in1=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                in2=i;
            }
        }
        
        int ans=0;
        if(in1<in2){
            int a=in1+1+(in2-in1);
            int b=n-in2+(in2-in1);
            int c=in1+1+n-in2;
           ans=min(a,min(b,c));
        }
        else{
          int a=in2+1+(in1-in2);
            int b=n-in1+(in1-in2);
            int c=in2+1+n-in1;
           ans=min(a,min(b,c));
        }
        return ans;
    }
};