class Solution {
public:
    
    // Tabulation code
    
    bool check(int i,int j, string &s){
        while(i<j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    
    int minCut(string s) {
        
        int n=s.size();
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int mini=1e9;
            for(int j=n-1;j>=i;j--){
                if(check(i,j,s)){
                    mini=min(mini,1+dp[j+1]);
                }
            }
            dp[i]=mini;
        }
        return dp[0]-1;
    }
};