class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int a=0;a<n-2;a++)
        {
            
            if(nums[a]>0) break;
            int A=nums[a];
            if(a>0 && A==nums[a-1])
                continue;
            for(int b=a+1,c=n-1;b<c;)
            {
                int B=nums[b],C=nums[c];
                int sum=A+B+C;
               
                if(sum==0)
                {res.push_back({A,B,C});
                 while(b<c&&B==nums[b])
                     b++;
                 while(b<c&&C==nums[c])
                 c--;}
                else {if(sum>0)
                    c--;
                else 
                    b++;
                     }
            }
        }
        return res;
    }
};
