class Solution {
public:
    int f(vector<int> nums,int s,int e,vector<int> &dp)
    {
     if(s>e)
         return 0;
        if(s==e)
            return nums[e];
        
        if(dp[s]!=-1)
            return dp[s];
        dp[s]=max(f(nums,s+1,e,dp),nums[s]+f(nums,s+2,e,dp));
        return dp[s];
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1,-1);
        
        return max(f(nums,0,n-2,dp1),f(nums,1,n-1,dp2));
    }
};
