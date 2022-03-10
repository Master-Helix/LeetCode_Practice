class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        vector<int>pre;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            pre.push_back(sum);
        }
        
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int k=sum-pre[i];
            int v=(n-1-i)*(nums[i]);
            int v2=k-v;
            
            int k2=pre[i];
            int v3=(i+1)*nums[i];
            int v4=abs(k2-v3);
            ans.push_back(v2+v4);
        }
        return ans;
    }
};