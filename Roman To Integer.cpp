class Solution 
{
    public:
    int romanToInt(string s)
    {
        unordered_map<char,int>m{{'I',1},{'V',5},{'X',10}
                                ,{'L',50},{'C',100},{'D',500}
                                ,{'M',1000}};
       
        int n = s.length();
        int num=0;
        int prev=0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(m[s[i]]>=prev)
            {
                num += m[s[i]];
                prev = m[s[i]];
            }
            else
            {
                num -= m[s[i]];
            }
        }
    
        return num;
    }
};
