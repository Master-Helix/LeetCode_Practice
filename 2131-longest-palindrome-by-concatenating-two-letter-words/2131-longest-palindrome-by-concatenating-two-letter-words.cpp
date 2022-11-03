class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        map<string,int>m;
        for(auto it:words){
            m[it]++;
        }
        unordered_set<string>check;
        
        int flag=0;
        
        int ctr=0;
        
        for(auto it:m){
            string s=it.first;
            int count=it.second;
            if(s[0]==s[1] && m[s]!=-1){
                if(count%2==0){
                    m[s]=-1;
                    ctr+=(count*2);
                }
                else{
                    m[s]=-1;
                    flag=1;
                    count--;
                    ctr+=(count)*2;
                }
            }
            
            else if(s[0]!=s[1]){
                string s1=s;
                reverse(s1.begin(),s1.end());
                if(m.find(s1)!=m.end() && m[s]!=-1 && m[s1]!=-1){
                    int a=count;
                    int b=m[s1];
                    int c=min(a,b);
                    ctr+=(c*4);
                    m[s1]=-1;
                    m[s]=-1;
                }
                else{
                    m[s]=-1;
                }
            }
        }
        
        
        
        if(flag==1) ctr+=2;
        
        return ctr;
        
        
        
    }
};