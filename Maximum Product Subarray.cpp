class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res;
        vector<int> dpmax(n,1);
        vector<int> dpmin(n,1);
        
        res=dpmax[0]=dpmin[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            dpmax[i]=max({nums[i],nums[i]*dpmax[i-1],nums[i]*dpmin[i-1]});
            dpmin[i]=min({nums[i],nums[i]*dpmax[i-1],nums[i]*dpmin[i-1]});
            res=max(res,dpmax[i]);
        }
        return res;
    }
};
