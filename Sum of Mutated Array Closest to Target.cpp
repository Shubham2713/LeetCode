class Solution {
public:
    
    int ss(vector<int> arr,int k)
    {
        int n=arr.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>k)
                s+=k;
            else
                s+=arr[i];
        }
       return s; 
    }
    
    int findBestValue(vector<int>& arr, int target) {
        int lo=0,hi=*max_element(arr.begin(),arr.end()),mid;
        
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
            if(ss(arr,mid)>target)
                hi=mid-1;
            else
                lo=mid;
        }
        if(abs(ss(arr,lo)-target)<=abs(ss(arr,lo+1)-target))
            return lo;
        else
            return lo+1;
    }
};
