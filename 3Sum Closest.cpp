class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1,k=n-1;k>j;)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>target)
                    k--;
                else
                    j++;
                res=abs(sum-target)<abs(res-target)?sum:res;
            }
        }
        return res;
    }
};
