class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int sum=0;
        for(auto it:nums){
            if(it%2==0) sum+=it;
        }
        
        vector<int>v;
        for(int i=0;i<queries.size();i++){
            int val=queries[i][0];
            int in=queries[i][1];
            if(nums[in]%2!=0){
                if(val%2!=0) sum+=(nums[in]+val);
                nums[in]+=val;
            }
            else{
                if(val%2==0) sum+=val;
                else{
                    sum-=nums[in];
                }
                nums[in]+=val;
            }
            v.push_back(sum);
        }
        return v;
        
        
    }
};