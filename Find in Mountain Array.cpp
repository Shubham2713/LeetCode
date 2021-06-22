/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

//O(logn)

class Solution {
public:
    int findInMountainArray(int target, MountainArray &a) {
        int lo=0;
        int hi=a.length()-1;
        int mid;
        int peak;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(a.get(mid)>a.get(mid+1))
            hi=mid;
            else
                lo=mid+1;
        }
        peak=lo;
        lo=0;hi=peak;
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
            
            if(a.get(mid)>target)
                hi=mid-1;
            else
                lo=mid;
        }
        if(a.get(lo)==target)
            return lo;
        
        lo=peak+1;
        hi=a.length()-1;
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
            if(a.get(mid)<target)
                hi=mid-1;
            else
                lo=mid;
        }
        if(a.get(lo)==target)
            return lo;
        else
            return  -1;
        
    }
};
