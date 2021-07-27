class Solution {
public:
    string reverseVowels(string s) {
        
        int len=s.length();
        //cout<<len;
        for(int p1=0,p2=len-1;p1<p2;)
        {
            while(p1<p2)
            {
                if(s[p1]=='a'||s[p1]=='e'||s[p1]=='i'||s[p1]=='o'||s[p1]=='u'||s[p1]=='A'||s[p1]=='E'||s[p1]=='I'||s[p1]=='O'||s[p1]=='U')
                    break;
                else
                    p1++;
            }
            
            while(p1<p2)
            {
                if(s[p2]=='a'||s[p2]=='e'||s[p2]=='i'||s[p2]=='o'||s[p2]=='u'||s[p2]=='A'||s[p2]=='E'||s[p2]=='I'||s[p2]=='O'||s[p2]=='U')
                    break;
                else
                    p2--;
            }
            if(p1<p2)
            { swap(s[p1],s[p2]);
             p1++;
             p2--;}
        
        }
        return s;
        
    }
};
