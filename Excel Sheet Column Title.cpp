class Solution {
public:
    string convertToTitle(int colNumber) {
        string res="";
        while(colNumber>0)
        {
            res+=(char)(((colNumber-1)%26)+'A');
                colNumber=(colNumber-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
