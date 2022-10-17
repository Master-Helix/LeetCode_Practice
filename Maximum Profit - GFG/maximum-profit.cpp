//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  int solve(int i,int j,int arr[],int k,vector<vector<int>>&dp){
      if(i==dp.size() || j==2*k) return 0;
      
      if(dp[i][j]!=-1) return dp[i][j];
      
      int maxi=0;
      if(j%2==0){
          maxi=max(maxi,-arr[i]+solve(i+1,j+1,arr,k,dp));
          maxi=max(maxi,solve(i+1,j,arr,k,dp));
          return dp[i][j]=maxi;
      }
      maxi=max(maxi,arr[i]+solve(i+1,j+1,arr,k,dp));
      maxi=max(maxi,solve(i+1,j,arr,k,dp));
      return dp[i][j]=maxi;
  }
  
  
    int maxProfit(int k, int n, int arr[]) {
        // code here
        vector<vector<int>>dp(n,vector<int>(2*k,-1));
        
        return solve(0,0,arr,k,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends