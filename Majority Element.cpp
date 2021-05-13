class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int > s;
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
        
        for(auto x:s)
        {
            if(count(nums.begin(),nums.end(),x)>(n/2))
                return x;
        }
        return 0;
    }
};
