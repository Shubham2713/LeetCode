class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long c=0;
        long m=x;
        while(x>0)
        {
            int temp=x%10;
            c=c*10+temp;
            x=x/10;
        }
        if(c==m)
            return true;
        return false;
    }
};
