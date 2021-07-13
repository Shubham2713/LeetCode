class Solution {
public:
    int trip(vector<int > arr,int k)
    {
        int c=0;
        int temp=k;
        for(int i=0;i<arr.size();i++)
        {
            if(temp>=arr[i])
            {
                temp-=arr[i];
                
            }
            else
            {
            temp=k;
            i--;
            c++;
            }
        }
        //cout<<c<<" ";
        return c+1;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=accumulate(weights.begin(),weights.end(),0);
        int lo=*max_element(weights.begin(),weights.end()),hi=sum,mid;
        //cout<<lo<<" "<<hi;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(trip(weights,mid)<=days)
                hi=mid;
            else
                lo=mid+1;
        }
        return lo;
    }
};
