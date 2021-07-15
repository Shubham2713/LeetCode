//Brute force technique

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        
        nums.push_back(INT_MIN);
        if(nums[0]>nums[1]||n==1)
            return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
                return i;
        }
       return -1; 
    }
};
