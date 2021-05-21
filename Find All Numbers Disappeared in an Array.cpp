// time O(n) space O(n )
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n=nums.size();
        vector<int > hash(n+1);
        
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        vector<int> missing;
        for(int i=1;i<=n;i++)
        {
            if(hash[i]==0)
                missing.push_back(i);
        }
        return missing;
        
    }
};
//
