class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int lo=0,hi=n-1;
        int mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(arr[mid]<arr[0])
                hi=mid;
            else
                lo=mid+1;
        }
        if(arr[lo]<arr[0])
            return arr[lo];
        else
            return arr[0];
    }
};
