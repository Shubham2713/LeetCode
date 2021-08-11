class Solution {
public:
    int titleToNumber(string col) {
        int len=col.length();
        int res=0;
        for(int i=0;i<len;i++)
        {
            res+=(int)(col[i]-'A'+1)*pow(26,len-i-1);
        }
        return res;
    }
};
