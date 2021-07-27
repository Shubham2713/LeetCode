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
