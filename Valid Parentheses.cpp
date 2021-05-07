class Solution {
public:
    

    
    bool isValid(string str) {
        stack<char> storage;
        int len=str.length();
        
        
        for(int i=0;i<len;i++)
        {
            if(str[i]=='('||str[i]=='{'||str[i]=='[')
            {
                storage.push(str[i]);
                continue;
            }
           if((storage.empty()==false)&&((str[i]==')'&&storage.top()=='(')||(str[i]=='}'&&storage.top()=='{')||(str[i]==']'&&storage.top()=='[')))
            {
                storage.pop();
            }
            else
            {
                return false;
            }
        }
        if(storage.empty()==true)
            return true;
        else 
            return false; 
        
    }
};
