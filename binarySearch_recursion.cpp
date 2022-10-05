//cpp program for binary search usin recursion
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)//base case
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    //if element is not present in array
    return -1;
}

int main()
{
    int sizeofarray;
    cout << "Enter the size of array: ";
    cin >>sizeofarray;
    int arr[sizeofarray];
    cout<<"Enter the elements of array in sorted order"<<endl;
    for (int i = 0; i < sizeofarray; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the element to be searched :";
    int x ;
    cin>>x;
    int result = binarySearch(arr, 0, sizeofarray - 1, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index : " << result;
    return 0;
}
