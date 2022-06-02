class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        
        vector<vector<int>>ans;
        for(int j=0;j<matrix[0].size();j++){
            vector<int>v;
            for(int i=0;i<matrix.size();i++){
                v.push_back(matrix[i][j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};