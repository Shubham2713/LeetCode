//Optimized
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> row(m,1);
        vector<int> col(n,1);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(row[i]==0||col[j]==0)
                    matrix[i][j]=0;
            }
        
    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<n;k++)
                        if(matrix[i][k]!=0)
                            matrix[i][k]=6666;
                    for(int k=0;k<m;k++)
                        if(matrix[k][j]!=0)
                            matrix[k][j]=6666;
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][j]==6666)
                    matrix[i][j]=0;
        
    }
};
