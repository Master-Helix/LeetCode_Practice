//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
  int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
      if(i<0 || j<0) return 0;
      if(dp[i][j]!=-1) return dp[i][j];
      
      if(s1[i]==s2[j]) return dp[i][j]=1+solve(i-1,j-1,s1,s2,dp);
      return dp[i][j]=max(solve(i-1,j,s1,s2,dp),solve(i,j-1,s1,s2,dp));
  }
  
  
  
    int minimumNumberOfDeletions(string s1) { 
        // code here
        
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        return n-solve(n-1,n-1,s1,s2,dp);
        
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends