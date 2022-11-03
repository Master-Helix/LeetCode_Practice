class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        
        unordered_set<string>check(wordList.begin(),wordList.end());
        unordered_set<string>vis;
        queue<string>q;
        q.push(beginWord);
        int ans=1;
        if(check.find(endWord)==check.end()) return 0;
        
        string arr="abcdefghijklmnopqrstuvwxyz";
        
        while(!q.empty()){
            int k=q.size();
            while(k--){
                string s=q.front();
                q.pop();
                if(s==endWord) return ans;
                int c=0;
                for(int i=0;i<s.size();i++){
                    char a=s[i];
                    for(int j=0;j<26;j++){
                        if(a!=arr[j]){
                            s[i]=arr[j];
                        if(check.find(s)!=check.end() && vis.find(s)==vis.end()){
                            q.push(s);
                            vis.insert(s);
                        }
                        }
                    }
                    s[i]=a;
                }
            }
            ans++;
        }
        return 0;
        
    }
};