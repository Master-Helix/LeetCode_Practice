class Solution {
public:
    
    //Space Optimisation Solution
    

    
    int longestPalindromeSubseq(string s) {
        
        string s1=s;
        reverse(s1.begin(),s1.end());
        int m=s.size();
        
        vector<int>dp(m+1,0);
        
        
        
        for(int i=1;i<=m;i++){
            vector<int>temp(m+1,0);
            for(int j=1;j<=m;j++){
                if(s[i-1]==s1[j-1]){
                    temp[j]=1+dp[j-1];
                }
                else{
                    temp[j]=max(dp[j],temp[j-1]);
                }
            }
            dp=temp;
        }
        return dp[m];
        
    }
};