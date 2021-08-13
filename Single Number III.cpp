class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long axorb =0;
        for(int i=0;i<n;i++)
            axorb^=nums[i];
        long mask=(~axorb+1)&(axorb);
        int a=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(mask&nums[i])
                a^=nums[i];
            else
                b^=nums[i];
        }
        return {a,b};
        
    }
};
