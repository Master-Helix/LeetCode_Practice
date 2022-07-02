class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int k) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        for(int i=0;i<boxTypes.size();i++){
            int a=boxTypes[i][0];
            int b=boxTypes[i][1];
            if(k==0){
                break;
            }
            else{
                int c=min(k,a);
                k-=c;
                ans+=(c*b);
            }
        }
        return ans;
    }
};