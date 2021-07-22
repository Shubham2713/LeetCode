class Solution {
public:
    
    bool check(vector<vector<char>>& board,int j,int i)
    {
         vector<int> temp1(9,0);
        for(int l=j;l<j+3;l++)
                {
                   
                    for(int m=i;m<i+3;m++)
                    {
                        if(board[l][m]!='.')
                {
                    if(board[l][m]<'1' || board[l][m]>'9' || temp1[board[l][m]-'1']!=0 )
                        return false;
                    else
                        temp1[board[l][m]-'1']=1;
                }
                
                
                    }
                }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
       // bool res=check(board,0,0)&&check(board,0,3)&&check(board,0,6)&&check(board,3,0)&&check(board,3,3)&&check(board,3,6)&&check(board,6,0)&&check(board,6,3)&&check(board,6,6); 
       //  if(res==false)
       //      return false;
        
        for(int i=0;i<9;i++)
        {
            vector<int> temp1(9,0);
            vector<int> temp2(9,0);
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(board[i][j]<'1' || board[i][j]>'9' || temp1[board[i][j]-'1']!=0 )
                        return false;
                    else
                        temp1[board[i][j]-'1']=1;
                }
                if(board[j][i]!='.')
                {
                    if(board[j][i]<'1' || board[j][i]>'9' || temp2[board[j][i]-'1']!=0 )
                        return false;
                    else
                        temp2[board[j][i]-'1']=1;
                }
                
            }
           
        }
        
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {vector<int> temp1(9,0);
                for(int l=j;l<j+3;l++)
                {
                    
                    for(int m=i;m<i+3;m++)
                    {
                        if(board[l][m]!='.')
                {
                    if(board[l][m]<'1' || board[l][m]>'9' || temp1[board[l][m]-'1']!=0 )
                        return false;
                    else
                        temp1[board[l][m]-'1']=1;
                }
                
                
                    }
                }
                    
            }
        }
        
       
                                                     
        return true;
    }
};
