//O(n) time O(1) auxillary space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k%n==0)
            return ;
        else k=k%n;
        
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};

//O(n) time and space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k%n==0)
            return ;
        else k=k%n;
        
        vector<int > res;
        
        for(int i=n-k;i<n;i++)
            res.push_back(nums[i]);
        for(int  i=0;i<n-k;i++)
            res.push_back(nums[i]);
        
       
        nums=res;
        
    }
};
