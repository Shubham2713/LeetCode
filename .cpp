class Solution {
public:
    
    int count(int s)
    {
        
        int c=0;
        for(int i=0;i<32;i++)
        {
            if((s&(1<<i))!=0)
               c++; 
        }
        return c;
    }
    
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<=n;i++)
        {
            res.push_back(count(i));
        }
        return res;
    }
};
