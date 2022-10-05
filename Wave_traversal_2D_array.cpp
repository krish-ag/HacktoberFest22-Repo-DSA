#include<bits/stdc++.h>

using namespace std;

int main() {
int arr[1000][1000];
int val = 1;
int m,n;
cin>>m;
cin>>n;

for(int row = 0;row<=m-1;row++) {
    cout<<"{ ";
    for(int col = 0;col<=n-1;col++) {

        arr[row][col] = val;
        val++;
        cout<<arr[row][col]<<" ";
        }
           cout<<"} ";
           cout<<endl;
    }
    cout<<endl;

    cout<<"After Traversing In Wave Pattern"<<endl;
    cout<<endl;

 
    for(int col = 0;col<n;col++) {
    cout<<"{ ";

        if(col%2 == 0) {
            for(int row = 0;row<m;row++) {
                cout<<arr[row][col]<<" ";
            }
        }
        else {
            for(int row = m-1;row>=0;row--) {
                cout<<arr[row][col]<<" ";
            }
        }
           cout<<"} ";
           cout<<endl;

    }
    cout<<endl;
    return 0;
}




/*
INPUT: 3 3

{ 1 2 3 } 
{ 4 5 6 } 
{ 7 8 9 } 

After Traversing In Wave Pattern

{ 1 4 7 } 
{ 8 5 2 } 
{ 3 6 9 } 

*/
