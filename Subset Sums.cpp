
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int in, vector<int> arr, vector<int>& res, int n, int s){
    
    if(in == n){
        res.push_back(s);
        return;
    }
        
    solve(in+1, arr, res, n, s+arr[in]);
    solve(in+1, arr, res, n, s);
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> res;
    vector<int> arr(n, 0);
    
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    solve(0, arr, res, n, 0);
    
    for(int i=0;i<res.size();i++)
        cout << res[i] << " ";

    return 0;
}
