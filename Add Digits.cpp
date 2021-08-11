class Solution {
public:
    int addDigits(int num) {
        while(num>=10)
        {
            int c=num;
            num=0;
            while(c>0)
            {
                num+=c%10;
                c/=10;
            }
                
        }
        return num;
    }
};
