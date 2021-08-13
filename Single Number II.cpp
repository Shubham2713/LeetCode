class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        
        
        for(int i=0;i<32;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                int set=nums[j]&(1<<i)?1:0;
                if(set)
                    c++;
            }
            if(c%3==1)
                res=res|(1<<i);
        }
        return res;
    }
};
