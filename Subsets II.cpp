class Solution {
public:
    
   vector<vector<int>> solve(vector<int> &nums,int start,int end)
    {
        if(start>end)
            return {{}};
        
        vector<vector<int>> temp=solve(nums,start+1,end);
        
        vector<vector<int>> c2=temp;
        vector<vector<int>> c1=c2;
        vector<vector<int>> s=c2;
        for(int i=0;i<c1.size();i++)
        {
            c1[i].push_back(nums[start]);
            
        s.push_back(c1[i]); 
            
        }
        return s;
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> temp=solve(nums,0,nums.size()-1);
        set<vector<int>> dist(temp.begin(),temp.end());
        
        vector<vector<int> > ans(dist.begin(),dist.end());
        
        return ans;
        
        
        
    }
};
