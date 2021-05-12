class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        string c="",t="";
        c.push_back(name[0]);
        t.push_back(typed[0]);
        
        for(int i=1;i<name.length();i++)
            if(name[i]!=name[i-1])
                c.push_back(name[i]);
        
        for(int i=1;i<typed.length();i++)
            if(typed[i]!=typed[i-1])
                t.push_back(typed[i]);
        
        if(c.compare(t)!=0)
            return false;
        
        int n=c.length();
        vector<int> m(n,0),s(n,0);
        m[0]=1;
        s[0]=1;
        for(int i=0,k=0;i<name.length()-1;i++)
        {
            if(name[i]==name[i+1])
            {
                m[k]++;
            }
            else
            {
                k++;
            }
        }
        for(int i=0,k=0;i<typed.length()-1;i++)
        {
            if(typed[i]==typed[i+1])
            {
                s[k]++;
            }
            else
            {
                k++;
            }
        }
        for(int i=0;i<n;i++)
            if(s[i]<m[i])
                return false;
        
        return true;
    }
};
