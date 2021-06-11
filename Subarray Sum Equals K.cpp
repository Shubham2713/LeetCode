//O(n) time O(n) Space
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0;
        unordered_map<int,int > s;
        s[0]=1;
        int ps=0;
        for(int i=0;i<n;i++)
        {
            ps+=nums[i];
            if(s.find(ps-k)!=s.end())
            {
                res+=s[ps-k];
                
            }
        
                s[ps]++;
        }
        return res;
    }
};
