class Solution {
public:
    
    void solve(int i,vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&v){
        
      
        
        if(target==0) {
            ans.push_back(v);
            return;
        }
        
        
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1])continue;
            if(candidates[j]>target) break;
            v.push_back(candidates[j]);
            solve(j+1,candidates,target-candidates[j],ans,v);
            v.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        solve(0,candidates,target,ans,v);
        return ans;
        
    }
};