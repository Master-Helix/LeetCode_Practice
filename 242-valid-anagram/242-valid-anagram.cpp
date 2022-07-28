class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(256,0);
        for(auto it:s){
            v[it]++;
        }
        for(auto it:t){
            if(v[it]==0) return false;
            v[it]--;
        }
        
        for(int i=0;i<256;i++){
            if(v[i]!=0) return false;
        }
        return true;
    }
};