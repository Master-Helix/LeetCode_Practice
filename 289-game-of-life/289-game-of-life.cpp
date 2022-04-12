class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>v;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            vector<int>a(n,0);
            v.push_back(a);
        }
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int arr[8];
                fill(arr,arr+8,-1);
                if(i+1<m)
                {
                    arr[0]=board[i+1][j];
                }
                if(i-1>=0)
                {
                    arr[1]=board[i-1][j];
                }
                if(j+1<n)
                {
                    arr[2]=board[i][j+1];
                }
                if(j-1>=0)
                {
                    arr[3]=board[i][j-1];
                }
                if(i+1<m && j+1<n)
                {
                    arr[4]=board[i+1][j+1];
                }
                if(i+1<m && j-1>=0)
                {
                    arr[5]=board[i+1][j-1];
                }
                if(i-1>=0 && j+1<n)
                {
                    arr[6]=board[i-1][j+1];
                }
                if(i-1>=0 && j-1>=0)
                {
                    arr[7]=board[i-1][j-1];
                }
                
                int live=count(arr,arr+8,1);
                if(board[i][j]==1)
                {
                    if(live<2)
                        v[i][j]=0;
                    if(live==2 || live==3)
                        v[i][j]=1;
                    if(live>3)
                        v[i][j]=0;
                }
                else if(board[i][j]==0)
                {
                    if(live==3)
                        v[i][j]=1;
                }
            }
        }
        
        board=v;
        
    }
};