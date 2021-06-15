class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> res;
        int n=arr.size();
        if(n==0)
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        int lo=0,hi=n-1;
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
            res.push_back(lo);
        else
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        
        lo=0,hi=n-1;
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
            
            if(arr[mid]>target)
                hi=mid-1;
            else
                lo=mid;
        }
        if(arr[lo]==target)
        res.push_back(lo);
        
        return res;
        
    }
};
