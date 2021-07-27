class Solution {
public:
    bool isPalindrome(string s) {
        string check;
        int len=s.length();
        
        for(int i=0;i<len;i++)
        {
            char c=tolower(s[i]);
            if((c>='a'&&c<='z') ||(c>='0'&&c<='9'))
                check.push_back(c);
        }
        int l=check.length();
        for(int i=0,j=l-1;j>i;)
        {
            if(check[i]!=check[j])
                return false;
            j--;
            i++;
        }
        return true;
        
    }
};
