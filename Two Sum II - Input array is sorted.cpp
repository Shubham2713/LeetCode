class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(2,-1);
        for(int i=0,j=n-1;j>i;)
        {
            int sum=nums[i]+nums[j];
            if(sum==target)
            {
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
            else if(sum>target)
                j--;
            else if(sum<target)
                i++;
        }
        return ans;
    }
};
