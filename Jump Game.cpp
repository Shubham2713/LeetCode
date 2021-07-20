class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
       if(nums[0]==0)
           return false;
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==0)
            {
                int k=i-1;
                while(k>=0)
                {
                    if(k+nums[k]>i)
                        break;
                    k--;
                }
                if(k<0)
                return false;
            }
        }
        return true;
    }
};
