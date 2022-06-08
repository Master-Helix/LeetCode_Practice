class Solution {
public:
    
    bool check(int low,int high, string &s){
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;high--;
        }
        return true;
    }
    
    int removePalindromeSub(string s) {
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a++;
            }
            else{
                b++;
            }
        }
        
        if(check(0,s.size()-1,s)==true){
            return 1;
        }
        return 2;
        
        
    }
};