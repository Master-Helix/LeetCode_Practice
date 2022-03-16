class Solution {
public:
    
    void dfs(vector<vector<int>>&image,int i,int j,int m,int n,int v, int color)
    {
        if(i<0 || j<0|| i>=m || j>=n || image[i][j]!=v)
            return;
        image[i][j]=color;
        dfs(image,i+1,j,m,n,v,color);
        dfs(image,i,j+1,m,n,v,color);
        dfs(image,i-1,j,m,n,v,color);
        dfs(image,i,j-1,m,n,v,color);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int v=image[sr][sc];
        
        if(v==newColor)
            return image;
        int m=image.size(),n=image[0].size();
        dfs(image,sr,sc,m,n,v,newColor);
        return image;
    }
};