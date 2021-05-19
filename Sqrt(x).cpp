class Solution {
public:
    int mySqrt(int x) {
    if(x==0)
        return 0;
        int low=1;
        int high=x;
        while(low<=high)
        {
            long mid=low+(high-low)/2;
            long sq=mid*mid;
            if(sq==x)
                return (int)mid;
            else
                if(sq>x)
                {
                    high=(int)mid-1;
                }
            else
                low=(int)mid+1;
        }
        return high;
    }
    
};
