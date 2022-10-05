//nCr = n!/r!*(n - r)!

#include <iostream>
using namespace std;

int fact(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    return n * fact(n - 1);
}
int hehe(int n, int r){

    //fact
    int ok = fact(n);
    int ok1 = fact(r);
    int ok2 = fact(n - r);
    
    //solution
    return ok /(ok1 * ok2);
}

int main(){
    int n;
    int r;
    cin>>n;
    cin>>r;

    cout<<hehe(n, r)<<endl;

    return 0;
}
