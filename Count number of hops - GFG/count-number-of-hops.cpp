// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    
    long long mod=1000000007;
    
    long long solve(int n,vector<int>&dp){
        if(n<0){
            return 0;
        }
        
        if(n==0){
            return 1;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        int a=solve(n-1,dp);
        int b=solve(n-2,dp);
        int c=solve(n-3,dp);
        return dp[n]=(a%mod+b%mod+c%mod)%mod;
    }
    
 
    long long countWays(int n)
    {
        
        vector<int>dp(n+1,-1);
        return solve(n,dp);
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends