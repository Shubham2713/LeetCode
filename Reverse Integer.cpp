class Solution {
    template <class BidirectionalIterator>
  void reverse (BidirectionalIterator first, BidirectionalIterator last)
{
  while ((first!=last)&&(first!=--last)) {
    std::iter_swap (first,last);
    ++first;
  }
}
public:
    

    
    int reverse(int x) {
        if(x>=0)
        {
            string str=to_string(x);
            reverse(str.begin(),str.end());
            int n;
            try{
                n=stoi(str);
                
            }
            catch(const std::out_of_range& oor)
            {return 0;
            }
            return n;
        }
        else
        {
            if(x==INT_MIN)
                return 0;
            x*=-1;
            string str=to_string(x);
            reverse(str.begin(),str.end());
            int n;
            try{
                n=stoi(str);
                
            }
            catch(const std::out_of_range& oor)
            {return 0;
            }
            return -1*n;
        }
        
        
        
    }
};
