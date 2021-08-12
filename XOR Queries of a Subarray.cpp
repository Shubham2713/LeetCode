class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int > res;
        int n=arr.size();
        int r= queries.size();
        for(int i=1;i<n;i++)
            arr[i]=arr[i]^arr[i-1];
        
        for(int i=0;i<r;i++)
        {
            int c=0;
            if(queries[i][0]==0)
                c=arr[queries[i][1]];
            else
                c=arr[queries[i][0]-1]^arr[queries[i][1]];
            res.push_back(c);
        }
        return res;
    }
};
