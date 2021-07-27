class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int res=min(height[0],height[n-1])*(n-1);
        
        for(int i=0,j=n-1;j>i;)
        {
            res=max(min(height[i],height[j])*(j-i),res);
            if(height[i]<height[j])
            {int temp=height[i];
             i++;
             while(i<j && height[i]<=temp)
                i++;}
            else
            {
                int temp=height[j];
                j--;
                while(i<j&&height[j]<=temp)
                j--;}
            
            
        }
        return res;
    }
};


class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int res=min(height[0],height[n-1])*(n-1);
        
        for(int i=0,j=n-1;j>i;)
        {
            if(height[i]<height[j])
                i++;
            else
                j--;
            res=max(min(height[i],height[j])*(j-i),res);
        }
        return res;
    }
};
