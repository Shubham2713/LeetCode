//Optimised
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> res(n);
        res[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            res[i]=res[i+1]*nums[i];
        int prod_so_far=nums[0];
        res[0]=res[1];
        for(int i=1;i<n-1;i++)
        {
            res[i]=res[i+1]*prod_so_far;
            prod_so_far*=nums[i];
        }
        res[n-1]=prod_so_far;
        return res;    }
};



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> p(n);
        p[0]=nums[0];
        for(int i=1;i<n;i++)
            p[i]=p[i-1]*nums[i];
        vector<int> s(n);
        s[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            s[i]=s[i+1]*nums[i];
        vector<int> res(n);
        res[0]=s[1];
        res[n-1]=p[n-2];
        for(int i=1;i<n-1;i++)
            res[i]=p[i-1]*s[i+1];
        
        return res;
        
    }
};
