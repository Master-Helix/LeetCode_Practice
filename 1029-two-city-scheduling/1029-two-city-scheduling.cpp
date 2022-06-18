class Solution {
public:
    
    static bool cmp(vector<int>&a,vector<int>&b){
       return (a[0]-a[1])<(b[0]-b[1]);
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        sort(costs.begin(),costs.end(),cmp);
        
        int n=costs.size();
        int a=0,b=0;
        for(int i=0;i<n/2;i++){
            a+=costs[i][0];
            b+=costs[i][1];
        }
        
        for(int i=n/2;i<n;i++){
            a+=costs[i][1];
            b+=costs[i][0];
        }
        
        return min(a,b);
    }
};