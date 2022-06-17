class Solution {
public:
    
    //Space optimisation
    
    int longestCommonSubsequence(string s, string t) {
        int n1=s.size();
    int n2=t.size();
    vector<int>dp(n2,0);
    vector<int>temp(n2,0);
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
        {
            if(s[i]==t[j]){
                if(i-1>=0 && j-1>=0){
                    temp[j]=1+dp[j-1];
                }
                else{
                    temp[j]=1;
                }
            }
            else{
                int a=0,b=0;
                if(i-1>=0){
                    a=dp[j];
                }
                if(j-1>=0){
                    b=temp[j-1];
                }
                temp[j]=max(a,b);
            }
        }
        dp=temp;
    }
    return dp[n2-1];
    }
};