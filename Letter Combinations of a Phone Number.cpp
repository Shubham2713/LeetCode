class Solution {
public:
    
    vector<string> res;
    
    void f(string digit,int start,int end,string contri,unordered_map<char,string>& mp)
    {
        
        if(contri.size()==digit.size())
        {
            res.push_back(contri);
            return;
        }
        
        
            for(int j=0;j<mp[digit[start]].size();j++)
            {
                
                contri.push_back(mp[digit[start]][j]);
                f(digit,start+1,end,contri,mp);
                contri.pop_back();
            }
        
    }
    
    
    vector<string> letterCombinations(string digits) {
     unordered_map<char,string>    mp;
    mp['2']="abc";
    mp['3']="def";
    mp['4']="ghi";
    mp['5']="jkl";
    mp['6']="mno";
    mp['7']="pqrs";
    mp['8']="tuv";
    mp['9']="wxyz";
        if(digits.size()==0)
            return {};
        f(digits,0,digits.size()-1,"",mp);
        
       
        return res;
    }
};
