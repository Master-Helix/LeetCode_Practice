class Solution {
public:
   
         int uniquePaths(int m, int n) {
        
        int k=m+n-2;
        int a=m-1;
        double ans=1;
        
        for(int i=1;i<=a;i++)
        {
            ans=ans*(k-a+i)/i;
        }
        return (int)ans;
    }
};