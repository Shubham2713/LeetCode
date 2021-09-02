class Solution {
public:
    int f(vector<int>& nums,int i,vector<int>& dp)
    {
        int n=nums.size();
        if(i==n)
            return 0;
        if(i==n-1)
            return nums[n-1];
        if(dp[i]!=-1)
            return dp[i];
        dp[i]=max(f(nums,i+1,dp),nums[i]+f(nums,i+2,dp));
        return dp[i];
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return f(nums,0,dp);
        
    }
};
