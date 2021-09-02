class Solution {
public:
    bool isPowerOfFour(int n) {
        long long int temp=1;
        while(temp<=n)
        {
            if(temp==n)
                return true;
            temp*=4;
        }
        return false;
    }
};
