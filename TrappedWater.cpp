#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //find left array (big building at left)
    int left[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
        left[i] = temp;
        // cout<<left[i]<<" ";
    }
   
    //find right array (big building right)
    int right[n];
    temp = 0;
    for (int i = (n-1); i >= 0; --i)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
        right[i] = temp;
        // cout<<"temp "<<temp<<" ";
    }

    //lets check how much water is stored
    temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp + (min(left[i], right[i]) - arr[i]);
    }
    cout<<temp<<endl;
    
    return 0;
}
