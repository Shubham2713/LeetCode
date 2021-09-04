class Solution {
public:
    
    
    
    
    bool divisorGame(int n) {
        
      int c=0;
        while(n!=1)
        {
            int x=1;
            
            n=n-x;
            c++;
        }
        if(c%2==1)
            return true;
    return false;  
    }
};
