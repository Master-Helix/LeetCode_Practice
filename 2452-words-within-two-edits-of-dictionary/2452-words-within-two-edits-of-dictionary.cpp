class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        
        unordered_set<string>check(dictionary.begin(),dictionary.end());
        vector<string>ans;
        unordered_set<string>s1;
        
        for(int i=0;i<queries.size();i++){
            string s=queries[i];
            
            for(auto it:check){
                string s1=it;
                int ctr=0;
                if(s1.size()!=s.size()) break;
                
                for(int j=0;j<s1.size();j++){
                    if(s1[j]!=s[j]) ctr++;
                }
                
                if(ctr<=2){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};