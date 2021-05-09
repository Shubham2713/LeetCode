class Solution {
public:
    
    
    void sortColors(vector<int>& a) {
        
        int n=a.size();
        int low=0,high=n-1,mid=0;
        while(mid<=high)
        {
            switch(a[mid])
            {
                case 0:
                    {
                        int c=a[mid];
                        a[mid]=a[low];
                        a[low]=c;
                    }
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    int c=a[mid];
                        a[mid]=a[high];
                        a[high]=c;
                    high--;
                    break;
            }
        }
        
    }
};
