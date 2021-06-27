//O(n) 
class Solution {
public:
    bool isBalanced(string str)
    {
        stack <char> s;
        int n=str.length();
        if(str[0]=='(')
            s.push('(');
        else return false;
        for(int i=1;i<n;i++)
        {
            if(str[i]=='(')
                s.push(str[i]);
           else if(str[i]==')'&&s.empty()==false&&s.top()=='(')
                s.pop();
            else
                return false;
        }
        if(s.empty()==false)
            return false;
        else
            return true;
        
    }
    
    
    vector<string> generateParenthesis(int n) {
        string str="";
        for(int i=0;i<n;i++)
        {str+="(";}
        for(int i=0;i<n;i++)
        {str+=")";}
        vector <string > ans;
        
        do
        {
         if(isBalanced(str)==true)
            //cout<<str<<"\n";
             ans.push_back(str);
        }while(next_permutation(str.begin(),str.end()));
            
        return ans;
        
    }
};
