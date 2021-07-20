class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size()==0)
            return res; 
        int l=0;
            int r=matrix[0].size()-1;
        int t=0;
        int b=matrix.size()-1;
        int c=0;
        while(t<=b&&l<=r)
        {
            if(c==0)
            {
                for(int i=l;i<=r;i++)
                    res.push_back(matrix[t][i]);
                t++;
            }
            else if(c==1)
            {
                for(int i=t;i<=b;i++)
                    res.push_back(matrix[i][r]);
                r--;
                
            }
            else if(c==2)
            {
                for(int i=r;i>=l;i--)
                    res.push_back(matrix[b][i]);
                b--;
            }
            else if(c==3)
            {
                for(int i=b;i>=t;i--)
                    res.push_back(matrix[i][l]);
                l++;
            }
            
            c=(c+1)%4;
        }
        return res;
        
        
    }
};
