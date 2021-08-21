class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        while(num)
        {
            ans+=num%10;
            num/=10;
        }
        if(ans/10==0)
            return ans;
        else
            return addDigits(ans);
        
    }
};

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
