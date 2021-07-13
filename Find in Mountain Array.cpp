/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &marr) {
        int n=marr.length();
        int lo=0,hi=n-1,mid;
        
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(marr.get(mid)>marr.get(mid+1))
                hi=mid;
            else
                lo=mid+1;
        }
        if(target==marr.get(lo))
            return lo;
        int peak=lo;
        
            int loo=0,hii=peak-1;
            while(loo<hii)
            {
                mid=loo+(hii-loo)/2;
                if(marr.get(mid)>=target)
                    hii=mid;
                else
                    loo=mid+1;
            }
            if(marr.get(loo)==target)
                return loo;
                    
           loo=peak+1,hii=n-1;
            while(loo<hii)
            {
                mid=loo+(hii-loo)/2;
                if(marr.get(mid)<=target)
                    hii=mid;
                else
                    loo=mid+1;
            }
            if(marr.get(loo)==target)
                return loo;
            else
                return -1;
       
        
    }
};
