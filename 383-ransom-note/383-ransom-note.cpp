class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(256,0);
        
        for(auto it:magazine){
            v[it]++;
        }
        
        for(auto it:ransomNote){
            if(v[it]==0) return false;
            v[it]--;
        }
        return true;
    }
};