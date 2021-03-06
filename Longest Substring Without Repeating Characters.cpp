class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int largest=1;
        int n=s.length();
        if(n==0)
            return 0;
        vector<int> arr(256,0);
        //vector<int> temp(256,0);
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            arr[s[i]]=1;
            c=1;
            for(int j=i+1;j<n;j++)
            {
                //cout<<i<<" "<<j<<" "<<c<<"\n";
                if(arr[s[j]]==0)
                {
                    c++;
                    arr[s[j]]=1;
                    largest=max(c,largest);
                }
                else
                {
                   fill(arr.begin(),arr.end(),0);
                    break;
                }
            }
        }
        
        
        return largest;
    }
};


        /*for(int i=1;i<n;i++)
        {
            
            if(arr[(int)s[i]]==0)
            {c++;
             arr[(int)s[i]]=1;
            largest=max(largest,c);}
            else
            {
               arr.clear();
                arr[(int)s[i]]=1;
            c=1;}
        }
        */
        
        /*vector<int> arr(256,0);
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(arr[s[i]-'a']==0)
            {c++;
             arr[s[i]-'a']++;}
        }
            */
