//O(n) time O(n) space
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int > s;
        int n=nums.size();
        vector<int > res;
        for(int i=0;i<n;i++)
        {
            s[nums[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            if(s.find(target-nums[i])!=s.end()&&s[target-nums[i]]!=i)
            {
               
                
                res.push_back(i);
                
                res.push_back(s[target-nums[i]]);
                break;
            }
        }
        return res;
    }
};


/* O(nxn) time O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==(target-nums[i]))
                {
                  ans.push_back(i);
                    ans.push_back(j);
                    c=1;
                    break;
                } 
                
            }
            if(c==1)
                break;
        }
        return ans;
        
    }
};
*/

