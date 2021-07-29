class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> pr(difficulty.size());
        for(int i=0;i<difficulty.size();i++)
        {
            pr[i]={difficulty[i],profit[i]};
        }
        sort(pr.begin(),pr.end());
        sort(worker.begin(),worker.end());
        int ptr1,ptr2,ans,maxProfit,flag;
        ptr1=ptr2=ans=maxProfit=flag=0;
        
        while(ptr1<worker.size()&&ptr2<pr.size())
        {
            if(worker[ptr1]>=pr[ptr2].first)
            {
                maxProfit=max(maxProfit,pr[ptr2].second);
                ptr2++;
            }
            else
            {
                ans+=maxProfit;
                ptr1++;
                flag++;
            }
        }
        if(flag<worker.size())
        {
            ans+=maxProfit*(worker.size()-flag);
        }
        return ans;
    }
};
