class Solution {
public:
    
    bool bfs(vector<vector<int>>&graph,int i,vector<int>&vis)
    {
        queue<int>q;
        q.push(i);
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            for(int j=0;j<graph[k].size();j++)
            {
                int a=graph[k][j];
                if(vis[a]==-1)
                {
                    vis[a]=abs(1-vis[k]);
                    q.push(a);
                }
                else
                {
                    if(vis[a]==vis[k])
                        return false;
                }
            }
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int>vis(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(vis[i]==-1)
            {
                vis[i]=1;
                if(bfs(graph,i,vis)==false)
                    return false;
            }
        }
        return true;
    }
};