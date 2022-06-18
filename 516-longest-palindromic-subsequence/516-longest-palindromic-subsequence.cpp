class Solution {
public:
    
    //Tabulation Solution
    
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
        
        vector<vector<int>>dp(m+1,vector<int>(m+1,0));
        
        for(int i=0;i<=m;i++){
            dp[i][0]=0;
            dp[0][i]=0;
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==s1[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][m];
        
    }
};