#include<bits/stdc++.h>
using namespace std;
int longestKSubstr(string s, int K) {
    
            int i=0;
            int j=0;
            map<char,int> v;
            int g=-1;
            while(j<s.length())
            {
                v[s[j]]++;
                //cout<<"g = "<<g<<endl;
                if(v.size()<K)
                {
                    j++;
                }
                else if(v.size()==K)
                {
                    
                    g = max(g,j-i+1);
                    j++;
                }
                else if(v.size()>K)
                {
                    while(v.size()>K)
                    {
                        v[s[i]]--;
                        if(v[s[i]]==0)
                        {
                            v.erase(s[i]);
                        }
                        i++;
                    }
                    j++;
                    
                }
                
                        
            }
            return g;
    }
int main(){

    string str = "aabacbebebe";

    cout<<"Longest length of substring with 3 unique characters is "<<longestKSubstr(str,3);

}