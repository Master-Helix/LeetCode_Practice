class Solution {
public:
    
    int sliding_window(vector<int>&arr,int k)
    {
        int sum=0;
        int f=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        f+=sum;
        for(int i=k;i<arr.size();i++)
        {
            sum+=arr[i];
            sum-=arr[i-k];
            f+=sum;
        }
        return f;
    }
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int ans=0;
        for(int i=1;i<=arr.size();i++)
        {
            if(i%2!=0)
            {
                ans+=sliding_window(arr,i);
            }
        }
        return ans;
    }
};