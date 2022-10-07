#include<bits/stdc++.h>
using namespace std;

void sortarray(int *arr,int n){
    if(n==0 || n==1){
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarray(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    sortarray(arr,n);
}