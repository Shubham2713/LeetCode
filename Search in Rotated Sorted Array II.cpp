class Solution {
public:
    bool ss(vector<int> &arr,int lo, int hi, int target)
    {
        int mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(arr[mid]>=target)
                hi=mid;
            else
                lo=mid+1;
        }
        if(arr[lo]==target)
            return true;
        else
            return false;
        
    }
    
    bool search(vector<int>& nums, int target) {
        unordered_set<int> s(nums.begin(),nums.end());
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                arr.push_back(nums[i]);
                s.erase(nums[i]);
            }
        }
        int n=arr.size();
        int lo=0,hi=n-1,mid;
        
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            
            if(arr[mid]<arr[0])
                hi=mid;
            else
                lo=mid+1;
        }
        cout<<lo;
        if(arr[lo]<arr[0])
        {
         if(arr[n-1]<target)    
  return ss(arr,0,lo-1,target);         
            else
return ss(arr,lo,n-1,target);                
        }
        else
            return ss(arr,0,n-1,target);
    }
};
