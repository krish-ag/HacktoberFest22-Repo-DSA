//Replace Elements with Greatest Element on Right Side
class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
        vector<int> res;
        if(n==1){
            res.push_back(-1);
            return res;
        }
    int m=a[n-1];
    res.push_back(-1);
    //res.push_back(a[n-1]);
    
    for(int i=n-1;i>0;i--){
        if(a[i]>m)
            m = a[i];
        res.push_back(m);
    }
        reverse(res.begin(),res.end());
    return res;
    }
};