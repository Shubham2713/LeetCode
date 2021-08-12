class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n;i++)
            arr[i]=arr[i]^arr[i-1];
        
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int a;
                if(i==0)
                    a=arr[j-1];
                else
                    a=arr[j-1]^arr[i-1];
                
                for(int k=j;k<n;k++ )
                {
                int b=arr[k]^arr[j-1];
                    if(a==b)
                        c++;
                }
            }
        }
        return c;
    }
};
