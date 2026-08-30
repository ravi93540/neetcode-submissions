class Solution {
public:
void fun(int i,int j,int n,int m,vector<vector<char>>&board)
{
    if(i<0 || i>=n || j<0 || j>=m || board[i][j]!='O')
    return;
    board[i][j]='.';
    fun(i+1,j,n,m,board);
    fun(i,j+1,n,m,board);
    fun(i-1,j,n,m,board);
    fun(i,j-1,n,m,board);
}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            fun(i,0,n,m,board);
            fun(i,m-1,n,m,board);
        }
         for(int i=0;i<m;i++)
        {
            fun(0,i,n,m,board);
            fun(n-1,i,n,m,board);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                board[i][j]='X';
                if(board[i][j]=='.')
                board[i][j]='O';
            }
        }
    }
};
