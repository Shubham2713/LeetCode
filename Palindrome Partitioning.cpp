class Solution {
public:
    bool isPalindrome(string s)
    {
        int start=0,end=s.length()-1;
        while(start<=end)
        {
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
        }
        return true;
        
    }
    vector<vector<string >> res;
    
    void f(string s,int start,int end,vector<string> contri)
    {
        if(start>end)
        {
            res.push_back(contri);
            return;
        }
        
        for(int i=start;i<=end;i++)
        {
            string str=s.substr(start,i-start+1);
            if(!isPalindrome(str))
                continue;
            contri.push_back(str);
            f(s,i+1,end,contri);
            contri.pop_back();
        }
    }
    
    
    
    vector<vector<string>> partition(string s) {
        f(s,0,s.size()-1,{});
        return res;
    }
};
