class Solution {
public:
    int maximumSwap(int num) {
        deque<int> dig,temp;
        while(num>0)
        {
            temp.push_front(num%10);
            dig.push_front(num%10);
            num/=10;
        }
        sort(temp.begin(),temp.end(),greater<int>());
        int l=0;
        int n=temp.size();
        for(int i=0;i<n;i++)
        {
            if(temp[l]==dig[i])
            {l++;
                continue;}
            else
            {
                int c=dig[i];
                dig[i]=temp[l];
                for(int j=n-1;j>i;j--)
                    if(dig[j]==temp[l])
                    {dig[j]=c;
                     break;}
              break;  
            }
            
        }
        
        long res=0;
        for(int i=0;i<n;i++)
        {
            res=res*10+dig[i];
        }
        return res;
    }
};
