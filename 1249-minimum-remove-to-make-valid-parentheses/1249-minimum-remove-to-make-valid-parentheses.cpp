class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cntr = 0;
        string res = "";   //store the string with extra open brackets 
        
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            
            
            if(s[i] == '(')
            {
                cntr++;
                
            }
            else if(s[i] == ')')
            {
                if(cntr == 0)
                {
                    continue;
                }
                else
                 cntr--;
                
            }

                res += s[i];
            
        }
        if(cntr == 0)
            return res;

        
        
        string ans = "";
        
        int i;
        for( i=res.size()-1; i>=0 and cntr > 0; i--)
        {
            if(cntr>0 and res[i] == '(')
            {
                cntr--;
                continue;
            }
            ans = res[i] + ans ;
        }
        

        string x = res.substr(0, i+1);

        return x + ans;
    }
};