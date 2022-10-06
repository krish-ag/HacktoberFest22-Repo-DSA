#include<iostream>

using namespace std;
void printarr(int arr[] , int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void revarr(int arr[] , int size){
   int  start = 0;
    int end = size-1;
    while(start <= end){
     swap(arr[start], arr[end]);
     start++;
     end--;
    }     
}

int main(){
     int arr[6] = { 2, 44, 74 ,- 2 , 39, 10};
     int brr[5] = { 21,77 ,- 32 , 23, 11};
      revarr( arr, 6);

      printarr(arr, 6);
      revarr( brr, 5);

      printarr(brr, 5);

}

// Code Contributed by - Anamika Pandey
