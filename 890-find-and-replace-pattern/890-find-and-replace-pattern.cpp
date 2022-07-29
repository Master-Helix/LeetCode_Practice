class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>ans;
        
        for(auto it:words){
            
                if(pattern.size()==it.size()){
                    unordered_map<char,char>m;
                    unordered_set<char>s;
                    int flag=0;
                    for(int j=0;j<pattern.size();j++){
                        if((m.find(pattern[j])==m.end()) &&(s.find(it[j])==s.end())){
                            m[pattern[j]]=it[j];
                        }
                        else{
                            if(m[pattern[j]]!=it[j]){
                                flag=1;
                                break;
                            }
                        }
                        s.insert(it[j]);
                    }
                    if(flag==0) ans.push_back(it);
                }
        }
        return ans;
    }
};