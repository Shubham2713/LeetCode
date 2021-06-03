class Solution {
public:
    int thirdMax(vector<int>& arr) {
        unordered_set <int> s;
        int n=arr.size();
        for(int i=0;i<n;i++)
        s.insert(arr[i]);
        if(s.size()<3)
            return *max_element(s.begin(),s.end());
        else
        {
            s.erase(*max_element(s.begin(),s.end()));
            s.erase(*max_element(s.begin(),s.end()));
            return *max_element(s.begin(),s.end());
        }
        return -1;
    }
};
