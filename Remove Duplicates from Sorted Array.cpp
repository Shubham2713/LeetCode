//1st
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int p1=0,p2=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[p1]<nums[p2] )
            {if(p2-p1==1)
            {p1++;
                p2++;}
             else
             {
                 swap(nums[p1+1],nums[p2]);
                 p1++;
                 p2++;
                 
             }
            }
            else
                p2++;
                
        }
        return p1+1;
    }
};

//2nd
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            i++;
            nums[i]=nums[j];
                
        }
        return i+1;
    }
};

//3rd

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int pre=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==pre)
            {
                nums.erase(nums.begin()+i,nums.begin()+i+1);
            i--;
            }
            else
                pre=nums[i];
        }
        return nums.size();
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int pre=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==pre)
            {
                nums.erase(nums.begin()+i,nums.begin()+i+1);
            i--;
            }
            else
                pre=nums[i];
        }
        return nums.size();
    }
};
