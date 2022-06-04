class Solution {
public:
 void rakshit(int index,vector<vector<string>>&ans,vector<string> &board,vector<int>&row,vector<int>&lower_d,vector<int>&upper_d)
    {
        if(index==board.size())
        {
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<board.size();i++)
        {
            if(row[i]==0 && lower_d[i+index]==0 && upper_d[board.size()-1-i+index]==0)
            {
                board[i][index]='Q';
                lower_d[i+index]=1;
                upper_d[board.size()-1-i+index]=1;
                row[i]=1;
                
                rakshit(index+1,ans,board,row,lower_d,upper_d);
                
                board[i][index]='.';
                lower_d[i+index]=0;
                upper_d[board.size()-1-i+index]=0;
                row[i]=0;  
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        vector<int>row(n,0),lower_d(2*n-1,0),upper_d(2*n-1,0);
        int index=0;
        rakshit(index,ans,board,row,lower_d,upper_d);
        return ans;
    }
};