class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr=nums[0];
        int res=nums[0];
        
        for(int i=1;i<n;i++)
        {
            curr=max(curr+nums[i],nums[i]);
            res=max(res,curr);
        }
        return res;
    }
};
