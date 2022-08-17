class Solution {
public:
    string longestPalindrome(string str) {
         int n=str.size();
    vector<vector<int>>dp(n,vector<int>(n,0));
    
    //size 1 is always palindrome
    //i==j
    //ans size 2 should be checked as in base case
    
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    
    int start=0,maxi=1;
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            dp[i][i+1]=1;
            if(flag==0){
                start=i;
                flag=1;
            }
            maxi=2;
        }
    }
    
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(dp[i+1][j-1]==1 && str[i]==str[j]){
                dp[i][j]=1;
                if(maxi<k){
                    maxi=k;
                    start=i;
                }
            }
        }
    }
    
    string ans="";
    for(int i=start;i<start+maxi;i++){
        ans+=str[i];
    }
    return ans;
    
    }
};