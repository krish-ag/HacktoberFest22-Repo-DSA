class Solution {
    void sol(int start, string s, string res, vector<string>& ans, set<string>& dict)
    {
        if(start==s.length())
        {
            res.pop_back();
            ans.push_back(res);
            return;
        }
        string temp="";
        for(int i=start;i<s.length();i++)
        {
            temp.push_back(s[i]);
            if(dict.find(temp)!=dict.end())
            {
                sol(i+1,s,res+temp+" ",ans,dict);
            }
        }
    }
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>ans;
        string res;
        set<string>dict;
        for(auto x: wordDict)
        {
            dict.insert(x);
        }
         sol(0,s,res,ans,dict);
        return ans;
    }
};