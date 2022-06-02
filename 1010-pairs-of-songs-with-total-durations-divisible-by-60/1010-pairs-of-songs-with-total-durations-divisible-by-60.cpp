class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        for(int i=0;i<time.size();i++){
            if(time[i]>=60){
                time[i]=time[i]%60;
            }
        }
        
        unordered_map<int,int>m;
        int ans=0;
        for(auto it:time){
            if(m.find(60-it)!=m.end()){
                ans+=m[60-it];
            }
            else if(it==0){
                ans+=m[0];
            }
            m[it]++;
        }
        return ans;
    }
};