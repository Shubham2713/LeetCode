class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int res=0;
        for(int i=0;i<32;i++)
        {
            int a_set=a&(1<<i)?1:0;
            int b_set=b&(1<<i)?1:0;
            int c_set=c&(1<<i)?1:0;
            if(c_set==(a_set||b_set))
                continue;
            else if(c_set==0&&1==a_set&&b_set==1)
                res+=2;
            else
                res+=1;
            
        }
        return res;
        
    }
};
