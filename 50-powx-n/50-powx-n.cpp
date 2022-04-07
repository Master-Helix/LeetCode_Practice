class Solution {
public:
   
    
    double myPow(double x, int n) {
        
        long long m=abs(n);
        double ans=1.0;
        while(m)
        {
            if(m%2)
            {
                ans=ans*x;
                m--;
            }
            else
            {
                x=x*x;
                m/=2;
            }
        }
        if(n<0)
            return (double)1.0/ans;
        return ans;
    }
};