class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> dp(n,0);
        dp[0]=1;
        int res=1;
        
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[i]>nums[j])
                    dp[i]=max(dp[i],1+dp[j]);
            }
            res=max(res,dp[i]);
        }
        return res;
    }
};
