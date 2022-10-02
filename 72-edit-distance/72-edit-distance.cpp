class Solution {
public:
    
//Memoization Solution

int solve(int i,int j,string &s1,string &s2,vector<vector<int>>&dp){
    if(i<0){
        return j+1;
    }
    if(j<0){
        return i+1;
    }
    
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    if(s1[i]==s2[j]){
        return dp[i][j]=solve(i-1,j-1,s1,s2,dp);
    }
    int a=1+solve(i-1,j,s1,s2,dp);
        int b=1+solve(i-1,j-1,s1,s2,dp);
        int c=1+solve(i,j-1,s1,s2,dp);
        return dp[i][j]=min(a,min(b,c));
}


int minDistance(string str1, string str2)
{
   int m=str1.size(),n=str2.size();
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return solve(m-1,n-1,str1,str2,dp);
}
  
};