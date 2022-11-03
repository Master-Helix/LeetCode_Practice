class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        queue<string>q;
        unordered_set<string>check(bank.begin(),bank.end());
        unordered_set<string>vis;
        vis.insert(start);
        q.push(start);
        
        if(check.find(end)==check.end()) return -1;
        int steps=0;
        
        char arr[4]={'A','C','G','T'};
        
        
        while(!q.empty()){
            int k=q.size();
            for(int i=0;i<k;i++){
                string s=q.front();
                if(s==end) return steps;
                q.pop();
                for(int i1=0;i1<s.size();i1++){
                    char a=s[i1];
                    for(int j=0;j<4;j++){
                        s[i1]=arr[j];
                        if(check.find(s)!=check.end() && vis.find(s)==vis.end()){
                            q.push(s);
                            vis.insert(s);
                        }
                        s[i1]=a;
                    }
                }
            }
            steps++;
        }
        return -1;
        
    }
};