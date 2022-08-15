class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<string,int>m;
        m["I"]=1;
        m["IV"]=4;
        m["V"]=5;
        m["IX"]=9;
        m["X"]=10;
        m["XL"]=40;
        m["L"]=50;
        m["XC"]=90;
        m["C"]=100;
        m["CD"]=400;
        m["D"]=500;
        m["CM"]=900;
        m["M"]=1000;
        
        
       int result=0;
        
        int i=0;
        while(i<s.size())
        {
            string k="";
            string k2="";
            k+=s[i];
            k+=s[i+1];
            k2+=s[i];
            if(m.find(k)!=m.end())
            {
                result+=m[k];
                i+=2;
            }
            else
            {
                result+=m[k2];
                i++;
            }
        }
        if(i!=s.size())
        {
            string k2="";
            k2+=s[i];
            result+=m[k2];
        }
        return result;
    }
};