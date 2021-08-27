class Solution {
public:
    vector<vector<int>> res;
    void f(vector<int> nums,vector<bool> b,vector<int> contri)
    {
        if(contri.size()==nums.size())
        {
            res.push_back(contri);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(b[i]==0)
                continue;
            contri.push_back(nums[i]);
            b[i]=0;
            f(nums,b,contri);
            contri.pop_back();
            b[i]=1;
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> b(nums.size(),1);
        f(nums,b,{});
        return res;
    }
};
