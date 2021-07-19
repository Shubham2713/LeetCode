class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1)
            return 0;
        vector<int> max_one(n);
        max_one[0]=0;
        int min_so_far=prices[0];
        for(int i=1;i<n;i++)
        {
            max_one[i]=max(max_one[i-1],prices[i]-min_so_far);
            min_so_far=min(min_so_far,prices[i]);
        }
        
        int res=prices[n-1],ans=0;
        ans=max(ans,max_one[n-2]);
        for(int i=n-2;i>=1;i--)
        {
            int temp=max_one[i-1]+res-prices[i];
            res=max(res,prices[i]);
            ans=max(ans,temp);
        }
        int temp=res-prices[0];
        ans=max(ans,temp);
        
        return ans;
        
            
    }
};
