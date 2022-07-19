class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        
        int i=1;
        while(i<numRows){
            vector<int>v2(i+1,1);
            vector<int>v1=ans[ans.size()-1];
            if(v1.size()>1){
                for(int j=1;j<v1.size();j++){
                    v2[j]=v1[j]+v1[j-1];
                }
            }
            i++;
            ans.push_back(v2);
        }
        return ans;
    }
};