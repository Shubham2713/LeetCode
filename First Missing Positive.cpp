//optimized
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int k=0,l=n-1;
        while(k<=l)
        {
            if(nums[k]>0)
            {
                k++;
                continue;
                
            }
            swap(nums[k],nums[l]);
            l--;
        }
        int new_size=l+1;
        
        for(int i=0;i<new_size;i++)
        {
            if(abs(nums[i])>new_size)
                continue;
            if(nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]*=-1;
        }
        for(int i=0;i<new_size;i++)
            if(nums[i]>0)
                return i+1;
        
        return new_size+1;
        
    }
};


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
