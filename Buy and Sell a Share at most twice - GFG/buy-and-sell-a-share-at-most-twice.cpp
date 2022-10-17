//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++



int solve(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
    if(i==arr.size() || j==4) return 0;
    
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(j%2==0){
        int a=solve(i+1,j,arr,dp);
        int b=-arr[i]+solve(i+1,j+1,arr,dp);
        return dp[i][j]=max(a,b);
    }
    int a=solve(i+1,j,arr,dp);
    int b=arr[i]+solve(i+1,j+1,arr,dp);
    return dp[i][j]=max(a,b);
    
}


int maxProfit(vector<int>&arr){
    //Write your code here..
    int n=arr.size();
    
    vector<vector<int>>dp(n,vector<int>(4,-1));
    
    return solve(0,0,arr,dp);
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends