class Solution {
  //bool ba=false,bb=false,bc=false,bd=false;
public:
bool safe(int i,int j,int n,int m,vector<vector<int>>&visited)
{
    return (i>=0 && i<n && j>=0 && j<m && visited[i][j]==0);
}
    bool fun(int i,int j,vector<vector<int>>&visited,vector<vector<char>>& board,string word,int n,int m,string &temp)
    {
        visited[i][j]=1;
       temp.push_back(board[i][j]);
       bool ba=false,bb=false,bc=false,bd=false;
       if(temp.size()>word.size())
       {
        //cout<<"ravi";
        return false;
       }
       if(temp.size()==word.size())
       {
        //cout<<"ravi";
        if(temp==word)
        {
            visited[i][j] = 0;
                temp.pop_back();
        cout<<"ravi";
        return true;
        }
        else
        {
             visited[i][j] = 0;
                temp.pop_back();
        return false;
        }
       }
       
       //visited[i][j]=1;
       //temp.push_back(board[i][j]);
       if(safe(i+1,j,n,m,visited))
        ba=fun(i+1,j,visited,board,word,n,m,temp);
       if(safe(i,j+1,n,m,visited) )
        bb=fun(i,j+1,visited,board,word,n,m,temp);
       if(safe(i,j-1,n,m,visited) )
        bc=fun(i,j-1,visited,board,word,n,m,temp);
        if(safe(i-1,j,n,m,visited))
         bd=fun(i-1,j,visited,board,word,n,m,temp);
        visited[i][j]=0;
        temp.pop_back();
        return (ba||bb||bc||bd);
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int word_size=word.size();
        if(word_size==0)
        return false;
       // ba=false,bb=false,bc=false,bd=false;
        
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 
                if(board[i][j]==word[0])
                {
                    cout<<"travi";
                    string temp="";
                    //temp.push_back(board[i][j]);
                    //visited[i][j]=1;
                   bool be= fun(i,j,visited,board,word,n,m,temp);
                    if(be)
                    {
                        return true;
                       
                    }
                    //visited[i][j]=0;
                }
            }
            
        }
        return false;
    }
};
