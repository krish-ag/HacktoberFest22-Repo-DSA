#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void commonelements(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{
    int arr[100];
    int j=0;

    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    sort(arr3,arr3+n3);

    if(n1<n2 && n1<n3)
    {
        for(int i=0;i<n1;i++)
        {
            if(arr1[i]==arr2[i] && arr3[i])
            {
                arr[j]=arr1[i];
                j++;
            }
                
        }
    }

    else if (n2<n1 && n2<n3)
    {
        for(int i=0;i<n2;i++)
        {
            if(arr2[i]==arr1[i] && arr3[i])
            {
                arr[j]=arr2[i];
                j++;
            }       
        }
    }
    else
    {
        for(int i=0;i<n3;i++)
        {
            if(arr3[i]==arr1[i] && arr2[i])
            {
                arr[j]=arr3[i];
                j++;
            }       
        }
    }

    for(int k=0;k<j;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    int A[]={1, 5, 10, 20, 40, 80};
    int B[]={6, 7, 20, 80, 100};
    int C[]={3, 4, 15, 20, 30, 70, 80, 120};

    int n1=sizeof(A)/sizeof(int);
    int n2=sizeof(B)/sizeof(int);
    int n3=sizeof(C)/sizeof(int);

    commonelements(A,B,C,n1,n2,n3);

    return 0;
}