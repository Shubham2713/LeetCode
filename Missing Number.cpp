class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int res=-1;
        for(int i=-1;i<=n;i++)
        {
            res^=i;
        }
        for(int i=0;i<n;i++)
            res^=nums[i];
        
        return res;
    }
};
