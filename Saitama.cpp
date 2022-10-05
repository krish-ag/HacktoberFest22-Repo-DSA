#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int n, k;
    
    for (int number = 0; number < T; number++){
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int temp;
        int count = 0;
        for (int i = 0; i < (n-1); i++){
            temp = arr[i];
            if ((temp + k) <= arr[i + 1]){
                count += k;
            }
            else{
                count += (arr[i + 1] - arr[i]); 
            }
        }
        count += k;
        cout<<count<<endl;
    }
    
    return 0;
}
