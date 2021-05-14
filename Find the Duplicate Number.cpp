//time O(nlogn) spacce-O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -12;
    }
};
//time O(n) spacce-O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n+1,0);
        
        for(int i=0;i<n;i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0;i<n+1;i++)
            if(arr[i]>1)
                return i;
        
        return 0;
    }
};
