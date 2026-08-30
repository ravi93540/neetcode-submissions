class Solution {
public:
bool isSafe(int r,int c,vector<string> &board)
{
    for(int i=r-1;i>=0;i--)
    {
        if(board[i][c]=='Q')
        return false;
    }
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j]=='Q')
        return false;
    }
    for(int i=r-1,j=c+1;i>=0 && j<board.size();i--,j++)
    {
        if(board[i][j]=='Q')
        return false;
    }
    return true;
}
void fun(int r,vector<string>& board,int &ans)
{
    if(r==board.size())
    {
        ans++;
        return;
    }
    for(int c=0;c<board.size();c++)
    {
        if(isSafe(r,c,board))
        {
            board[r][c]='Q';
            fun(r+1,board,ans);
            board[r][c]='.';
        }
    }
}
    int totalNQueens(int n) {
        int ans=0;
         vector<string> board(n,string(n,'.'));
        fun(0,board,ans);
        return ans;
    }
};