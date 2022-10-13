//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

 bool solve(int i,int j,int n,int nums[],vector<vector<int>>&dp){
        
        
        if(i==0){
            if(j==nums[0]) return true;
            return false;
        }
        if(j==0) return true;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        bool a=solve(i-1,j,n,nums,dp);
        bool b=false;
        if(j>=nums[i]){
            b=solve(i-1,j-nums[i],n,nums,dp);
            return dp[i][j]=a|b;
        }
        return dp[i][j]=a||b;
    }

    int equalPartition(int n, int nums[])
    {
         
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0) return false;
        
        vector<vector<int>>dp(n,vector<int>((sum/2)+1,-1));
        
        return solve(n-1,sum/2,n,nums,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends