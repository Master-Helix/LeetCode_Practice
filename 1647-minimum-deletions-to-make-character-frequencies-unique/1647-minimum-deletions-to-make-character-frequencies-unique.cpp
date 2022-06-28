class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(256,0);
        unordered_set<int>s1;
        for(int i=0;i<s.size();i++){
            v[s[i]]++;
        }
        int ans=0;
        for(int i=0;i<256;i++){
            if(v[i]>0){
                if(s1.find(v[i])==s1.end()){
                    s1.insert(v[i]);
                }
                else{
                    int k=v[i];
                    int ctr=0;
                    while(ctr<k){
                        if(s1.find(k-ctr)==s1.end()){
                            s1.insert(k-ctr);
                            break;
                        }
                        ctr++;
                    }
                    ans+=ctr;
                }
            }
        }
        return ans;
    }
};