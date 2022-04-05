class Solution {
public:
    int mySqrt(int x) {
        
        int ans=0;
       int low=0,high=x;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)
            {
                low=mid+1;
                ans=mid;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};