class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int > res;
        int ws=words[0].length();
        int wn=words.size();
        int tot=ws*wn;
        int len=s.length();
        if(tot>len)
            return res;
        unordered_map<string,int> mp;
        for(int i=0;i<wn;i++)
            mp[words[i]]++;
        for(int i=0;i<=len-tot;i++)
        {
            int count=wn;
            int st=i;
            unordered_map<string,int> mp_temp;
            while(count)
            {
             string str=s.substr(st,ws);
                mp_temp[str]++;
                if(mp.find(str)!=mp.end()&&mp_temp[str]<=mp[str])
                {
                    count--;
                    st+=ws;
                }
                else
                    break;
                
            }
            if(count==0)
            res.push_back(i);
        }
     return res;   
    }
};
