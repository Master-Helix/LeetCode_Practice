class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int ctr=1;
                while(s.find(nums[i]+ctr)!=s.end()){
                    ctr++;
                }
                maxi=max(maxi,ctr);
            }
           
        }
        return maxi;
    }
};