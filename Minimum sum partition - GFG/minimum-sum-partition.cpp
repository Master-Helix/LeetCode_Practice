//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  
 
  
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    
	   
	    
	   vector<vector<bool>>dp(n,vector<bool>(sum+1,false));
    
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    dp[0][arr[0]]=true;
    
    for(int i=1;i<n;i++){
        for(int j=1;j<=sum;j++){
            bool no=dp[i-1][j];
            bool yes=false;
            if(arr[i]<=j){
                yes=dp[i-1][j-arr[i]];
            }
            dp[i][j]=no||yes;
        }
    }
    
    int mini=1e9;
    for(int j=0;j<=sum;j++){
        if(dp[n-1][j]==true){
            int k=sum-j;
            mini=min(mini,abs(k-j));
        }
    }
    return mini;
	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends