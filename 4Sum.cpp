class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        if(n<4)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int rem=target-nums[i]-nums[j];
               int front=j+1;
                int back=n-1;
                while(front<back)
                {
                    int two_sum=nums[front]+nums[back];
                    if(two_sum<rem)
                        front++;
                    else if(two_sum>rem)
                        back--;
                    else
                    {
                        
                        res.push_back({nums[i],nums[j],nums[front],nums[back]});
                        int f=nums[front];
                        int b=nums[back];

                    
                    while(front<back && nums[front]==f)
                        front++;
                    while(front<back && nums[back]==b)
                        back--;
                }
                  
                }
                while(j+1<n && nums[j+1]==nums[j])
                    j++;
            }
            while(i+1<n && nums[i+1]==nums[i])
                i++;
        }
        return res;
    }
};
