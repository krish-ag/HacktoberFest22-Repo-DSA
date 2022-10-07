#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void countduplicate(int arr[],int n)
{
    int count=0;
    sort(arr,arr+n);
    int max;
    max=arr[n-1];

    int *arr2=(int*)malloc((max+1)*sizeof(int));

    for(int i=0;i<max+1;i++)
    {
        arr2[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        arr2[arr[i]]+=1;
    }

    for(int i=0;i<(max+1);i++)
    {
        if(arr2[i]>1)
        {
           count++;
        }
    }
    cout<<count;
}

void removeduplicates(int arr[],int n)
{
    int arr3[n];

    sort(arr,arr+n);
    int j=0;
    int count=0;
    for(int i=0;i<n;i++)  //arr
    {   
        if(arr[i]!=arr[i+1])
        {
            arr3[j]=arr[i];
            j++;
            count++;
        }
    }   

    for(int k=0;k<count;k++)
    {
        cout<<arr3[k]<<" ";
    }
}

int  main()
{
    int arr[]={1,2,6,2,3,4,5,5,6,6};
    int n=sizeof(arr)/sizeof(int);

    countduplicate(arr,n);
    cout<<endl;
    removeduplicates(arr,n);
}