class Solution {
public:
    vector<vector<int>> f(vector<int> can,int start,int end,int target)
    {
        if(start>end)
           if(target==0)
               return {{}};
        else
        return {};
        if(target==0)
            return {{}};
        if(target<0)
        return {};
        
        vector<vector<int>> c2=f(can,start+1,end,target);
        vector<vector<int> > temp=f(can,start,end,target-can[start]);
        vector<vector<int>> c1;
        for(int i=0;i<temp.size();i++)
        {
            temp[i].push_back(can[start]);
            c1.push_back(temp[i]);
        }
        vector<vector<int>> res=c1;
        for(int i=0;i<c2.size();i++)
            res.push_back(c2[i]);
        
        return res;
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        
        return f(can,0,can.size()-1,target);
        
    }
};
