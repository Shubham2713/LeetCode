class NumMatrix {
public:
    vector<vector<int>> pre;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        pre=vector<vector<int>>(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                pre[i][j]=matrix[i][j];
                if(i-1>=0)
                    pre[i][j]+=pre[i-1][j];
                if(j-1>=0)
                    pre[i][j]+=pre[i][j-1];
                if(i-1>=0&&j-1>=0)
                    pre[i][j]-=pre[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res=pre[row2][col2];
        if(row1-1>=0)
            res-=pre[row1-1][col2];
        if(col1-1>=0)
            res-=pre[row2][col1-1];
        if(row1-1>=0&&col1-1>=0)
            res+=pre[row1-1][col1-1];
        
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
