class Solution {
public:
    int sum(vector<int> arr,int div)
    {
        int s=0;
        for(int i=0;i<arr.size();i++)
            s+=ceil((1.0*arr[i])/div);
        
        return s;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo=1,hi=*max_element(nums.begin(),nums.end()),mid;
        
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            
            if(sum(nums,mid)<=threshold)
                hi=mid;
            else
                lo=mid+1;
        }
        return lo;
        
    }
};
