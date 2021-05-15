class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
       
        
        set<int > val;
        int n=nums.size();
        
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                val.insert(nums[i]);
        }
        
        if(val.size()==0)
            return 1;
        
        int i=1;
        for(auto &x:val)
        {
            if(x!=i)
                return i;
            i++;
        }
 auto it=val.end();
        it--;
        return *(it)+1;
    }
};
