class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
     int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            
            for(int j=0;j<n;j++)
            {
            if(grid[i][j]==1)
            {
                int temp=j;
                j++;
                int flag=0;
                while(j<n)
                {
                   if(grid[i][j]==1)
                   {
                       flag=1;
                       grid[i][j]=7;
                   }
                    j++;
                }
                if(flag==1)
                    grid[i][temp]=7;
            }
                
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[j][i]==1||grid[j][i]==7)
                {
                    int temp=j;
                j++;
                int flag=0;
                while(j<m)
                {
                   if(grid[j][i]==1||grid[j][i]==7)
                   {
                       flag=1;
                       grid[j][i]=7;
                   }
                    j++;
                }
                if(flag==1)
                    grid[temp][i]=7;
                    
                }
            }
        }
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==7)
                    c++;
            }
        }
        return c;
    }
};
