//binary search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int lo=0,hi=n-1,mid;
        
        while(lo<hi )
        {
            mid=lo+(hi-lo)/2;
            
            if(mid+1<n && mid-1>=0 &&nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                return mid;
            else if(mid+1<n&&nums[mid]<nums[mid+1])
                lo=mid+1;
            else if(mid-1>=0)
                hi=mid-1;
            else
                break;
        }
        return lo;
        
        
    }
};


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
