class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    int fresh=0;
    queue<pair<int,int>>pq;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                fresh++;
            } 
            if(grid[i][j]==2){
                pq.push({i,j});
            }
        }
    }
    int cnt=0;
    
    while(!pq.empty()){
        int size=pq.size();
        while(size--){
        int x=pq.front().first;
        int y=pq.front().second;
        pq.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0 and ny>=0 and nx<n and ny<m and grid[nx][ny]==1){
                pq.push({nx,ny});
                grid[nx][ny]=2;
                fresh--;
            }
        }
        }
        cnt++;
    }
    if(fresh>0)return -1; // no need to re iterate to find if 1 is remaining
    if(cnt<=0)return 0;
    return cnt-1;
    }
};