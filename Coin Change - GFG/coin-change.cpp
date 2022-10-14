//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int mod=1e9+7;
   long long int solve(int i,int amount,int coins[],vector<vector<long long int>>&dp){
        
        if(amount==0) return 1;
        if(i==0){
            if(amount%coins[i]==0) return 1;
            return 0;
        }
        
        if(dp[i][amount]!=-1) return dp[i][amount];
        
        long long int not_take=solve(i-1,amount,coins,dp);
        long long int take=0;
        if(amount>=coins[i]) take=solve(i,amount-coins[i],coins,dp);
        return dp[i][amount]=(take+not_take);
        
    }
  
  
    long long int count(int coins[], int n, int amount) {

        // code here.
        
        vector<vector<long long int>>dp(n,vector<long long int>(amount+1,-1));
        
        return solve(n-1,amount,coins,dp);
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends