#include <iostream>
using namespace std;
void compare(int arr[], int n);

int main(){
    int T, n, ans;
    int arr[n];
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        compare(arr, n);
    }
    return 0;
}

void compare(int arr[], int n){
    int temp = arr[0];
    int i = 0;
    for (; i < n; i++)
    {
        if (temp > arr[i])
            temp = arr[i];
    }
    cout<<i<<endl;
}
