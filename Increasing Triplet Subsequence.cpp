class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return 0;
        int a,b;
        a=b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=a)
                a=arr[i];
            else if(arr[i]<=b)
                b=arr[i];
            else
                return 1;
        }
        return 0;        
    }
};
