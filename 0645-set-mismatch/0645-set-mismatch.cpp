class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        unordered_set<int>s;
        int n=nums.size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()) a=nums[i];
            s.insert(nums[i]);
        }
        
        for(auto it:s){
            sum+=it;
        }
        
        int m=(n*(n+1))/2;
        b=m-sum;
        
        return {a,b};
    }
};