class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        if(n%2!=0){
            int k=nums[n/2];
            for(int i=0;i<n;i++){
                ans+=abs(k-nums[i]);
            }
        }
        else{
            int k1=nums[n/2],k2=nums[(n/2)-1];
            int a1=0,a2=0;
            for(int i=0;i<n;i++){
                a1+=abs(k1-nums[i]);
                a2+=abs(k2-nums[i]);
            }
            ans=min(a1,a2);
        }
        return ans;
    }
};