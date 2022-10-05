#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    for(int i = 1; i <= t; i++)
    {
        float h; cin>>h;
        float m; cin>>m;
        // 360d is total angle to be covered by both the hands
        // 360/60 = 6d is covered by minutes hand every minute
        // 360/12 = 30d is covered by hrs hand every hr

        float hehe = abs((m * 6) - 0.5*(60 * h + m));


        hehe = min(hehe, 360 - hehe);
        cout<<hehe<<endl;

    }
    return 0;
}
