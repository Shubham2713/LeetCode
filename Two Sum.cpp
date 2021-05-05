class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==(target-nums[i]))
                {
                  ans.push_back(i);
                    ans.push_back(j);
                    c=1;
                    break;
                } 
                
            }
            if(c==1)
                break;
        }
        return ans;
        
    }
};
