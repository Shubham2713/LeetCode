class Solution {
public:
    vector<vector<int>> res;
 void f(int start,int end,int k,vector<int> contri)
    {
        if(k==0)
        {
            res.push_back(contri);
            return;
            
        }
        
        if(k!=0&&start>end)
            return;
     
     if(k>end-start+1)
         return;
        
        f(start+1,end,k,contri);
        contri.push_back(start);
        f(start+1,end,k-1,contri);
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        f(1,n,k,{});
        return res;
    }
};
