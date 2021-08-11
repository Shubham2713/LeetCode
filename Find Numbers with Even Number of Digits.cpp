class Solution {
public:
    
    bool check(int n)
    {
        int c=0;
        while(n>0)
        {
            n=n/10;
            c++;
        }
        if(c%2==0)
            return true;
        else
            return false;
    }
    
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(check(nums[i]))
                res++;
        }
        return res;
    }
};
