class Solution {
public:
    
    //Memoization Solution
    
    int solve(int i1,int i2,string &s1,string &s2,vector<vector<int>>&dp){
        if(i1<0 || i2<0){
            return 0;
        }
        
        if(dp[i1][i2]!=-1){
            return dp[i1][i2];
        }
        
        if(s1[i1]==s2[i2]){
         return dp[i1][i2]=1+solve(i1-1,i2-1,s1,s2,dp);   
        }
        return dp[i1][i2]=max(solve(i1-1,i2,s1,s2,dp),solve(i1,i2-1,s1,s2,dp));
    }
    
    int longestPalindromeSubseq(string s) {
        
        string s1=s;
        reverse(s1.begin(),s1.end());
        int m=s.size();
        
        vector<vector<int>>dp(m,vector<int>(m,-1));
        
        return solve(m-1,m-1,s,s1,dp);
    }
};