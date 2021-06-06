// time O(n) space O(n)
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<3)
            return 0; 
        vector<int > rmax(n,0);
        vector<int > lmax(n,0);
        int maxx=height[0];
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,height[i]);
            lmax[i]=maxx;
        }
        maxx=height[n-1];
        for(int i=n-1;i>=0;i--)
        {
            maxx=max(maxx,height[i]);
            rmax[i]=maxx;
        }
        int c=0;
        
        for(int i=1;i<n-1;i++)
        {
            c+=min(rmax[i],lmax[i])-height[i];
        }
        return c;
    }
};

//time O(nxn)  space O(1)
class Solution {
public:
    int trap(vector<int>& a) {
        
                int n=a.size();
        int res=0;
        
        for(int i=1;i<n-1;i++)
        {
            int lmax=a[i];
            for(int j=0;j<i;j++)
                lmax=max(lmax,a[j]);
            int rmax=a[i];
            for(int j=i+1;j<n;j++)
                rmax=max(rmax,a[j]);
            res+=min(rmax,lmax)-a[i];
        }
        return res;
    }
};
