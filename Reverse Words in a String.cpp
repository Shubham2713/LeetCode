class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        int l=s.length();
        if(l==0)
            return s;
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ')
                continue;
            string str;
            while(i<l&&s[i]!=' ')
            {    str+=s[i]; i++;}
            
            stk.push(str);
        }
        string res;
        while(!stk.empty())
        {
            res+=stk.top();
            stk.pop();
            if(!stk.empty())
                res+=" ";
        }
        return res;
    }
};


class Solution {
public:
    string reverseWords(string sk) {
        string s,st1="";
        int i=0;
        int len=sk.length();
        while(sk[i]==' ')
            i++;
        st1=sk.substr(i,len);
        int j=st1.length()-1;
         while(st1[j]==' ')
            j--;
        s=st1.substr(0,j+1);
        
        len=s.length();
        vector<string > str;
        
        string temp;
        for(int i=0;i<len;i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else
            {
                while(s[i]==' ')
                    i++;
                if(s[i]!=' ')
                    i--;
                str.push_back(temp);
                temp="";
                
            }
        }
        str.push_back(temp);
        string res="";
        for(int i=str.size()-1;i>=0;i--)
        {
            
            {  res+=str[i];
            if(i>0)
                res+=' ';
        }}
        return res;
    }
};
