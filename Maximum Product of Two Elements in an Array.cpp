class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int max1=arr[0];
        int max2=arr[1];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=max1)
            {
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>=max2)
                max2=arr[i];
        }
        return (max1-1)*(max2-1);
    }
};
