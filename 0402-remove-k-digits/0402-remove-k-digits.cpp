class Solution {
public:
    string removeKdigits(string nums, int k) {
        
        
        stack<char>s;
        for(int i=0;i<nums.size();i++){
            if(s.empty()){
                s.push(nums[i]);
            }
            else{
                while(!s.empty() && s.top()>nums[i] && k>0){
                    s.pop();
                    k--;
                }
                if(s.empty() && nums[i]=='0') continue;
                else s.push(nums[i]);
            }
        }
        
        while(!s.empty() && k>0){
            s.pop();
            k--;
        }
        
        string s1="";
        while(!s.empty()){
            s1+=s.top();
            s.pop();
        }
        if(s1=="") return "0";
        reverse(s1.begin(),s1.end());
        
        string ans="";
        if(s1[0]=='0'){
            int i=0;
            while(s1[i]=='0' && i<s1.size()){
                i++;
            }
            ans+=s1.substr(i,s1.size());
            if(ans=="") return "0";
            return ans;
        }
        
        return s1;
    }
};