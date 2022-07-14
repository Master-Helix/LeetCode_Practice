// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



int solve(int i1,int i2,int i3,string &s1,string &s2,string &s3,vector<vector<vector<int>>>&dp){
    
    if(i1<0 || i2<0 || i3<0) return 0;
    
    if(dp[i1][i2][i3]!=-1) return dp[i1][i2][i3];
    
    if(s1[i1]==s2[i2] && s2[i2]==s3[i3]){
        return dp[i1][i2][i3]=1+solve(i1-1,i2-1,i3-1,s1,s2,s3,dp);
    }
    return dp[i1][i2][i3]=max(solve(i1-1,i2,i3,s1,s2,s3,dp),max(solve(i1,i2-1,i3,s1,s2,s3,dp),solve(i1,i2,i3-1,s1,s2,s3,dp)));
    
}



int LCSof3 (string s1, string s2, string s3, int n1, int n2, int n3)
{
    vector<vector<vector<int>>>dp(n1,vector<vector<int>>(n2,vector<int>(n3,-1)));
    
    return solve(n1-1,n2-1,n3-1,s1,s2,s3,dp);
    
    
}