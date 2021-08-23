class Solution {
public:
    vector<vector<int>> f(vector<int> nums,int start,int end)
    {
        if(start>end)
            return {{}};
        vector<vector<int>> temp=f(nums,start+1,end);
        
        vector<vector<int>> c2=temp;
        vector<vector<int>> c1;
        for(int i=0;i<temp.size();i++)
        {
            temp[i].push_back(nums[start]);
            c1.push_back(temp[i]);
        }
        vector<vector<int >> res= c1;
        for(int i=0;i<c2.size();i++)
            res.push_back(c2[i]);
        
        return res;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        return f(nums,0,nums.size()-1);
    }
};
