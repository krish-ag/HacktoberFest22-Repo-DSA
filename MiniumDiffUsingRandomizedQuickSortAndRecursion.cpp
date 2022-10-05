#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int low, int high) ;

int partitionnn(int arr[], int low, int high);

void quickSort(int arr[], int l, int h) ;

int main()
{
	int n;cin>>n;

    int arr[n];
    int s[3000]={0}; //frequency array

    int maxi=-100000;
    int mini=100000;
    int r=0; 

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        s[arr[i]+1000]++;  // unique elements in frequency array

        if(s[arr[i]+1000]>1)
        {
            r++;
        }

        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    } 
    int a=0; //error variable
    if(maxi>1000 || mini<-1000) //error
    {
        a++;
        cout<<"No element in InArr can be more than 1000 or less than 1000."<<endl;
    }
    if(r>0) //error
    {
        a++;
        cout<<"All elements in InArr are not unique"<<endl;
    }
    if(n>2000 || n<2)//error
    {
        a++;
        cout<<"Size of array cannot be more than 2000 or less than 2."<<endl;
    }
    if(a==0) //no error
	{
        quickSort(arr, 0, n - 1);  //quick sort function

        int e=0; 
        int m=100000; 
        for(int i=0;i<n-1;i++)  
        {
            if(arr[i+1]-arr[i]<m)
            {
                m=arr[i+1]-arr[i];
            }
        }
        
        cout<<"OutArr = ";
        for(int i=0;i<n-1;i++) 
        {
            if(arr[i+1]-arr[i]==m)
            {
                e++;
                cout<<arr[i]<<" "<<arr[i+1]<<" ";
            }
        }
        cout<<endl;
        cout<<"MinDiff = "<<m<<endl;
        cout<<"Number of MinDiff pairs = "<<e<<endl;
        
    }
    
	return 0;
}

int partition(int arr[], int low, int high) //Function to take low element as pivot, place pivot element at correct sorted place and have smaller elements to left of pivot and greater to right of pivot
{
	int pivot = arr[low];
	int i = low - 1, j = high + 1;

	while (true) {

		
		do {  // element left greater than equal to pivot elem
			i++;
		} while (arr[i] < pivot);

		
		do {  //  element left smaller than equal to pivot elem
			j--;
		} while (arr[j] > pivot);

		if (i >= j)
			return j;

		swap(arr[i], arr[j]);
	}
}

int partitionnn(int arr[], int low, int high)
{
    //randomized pivot
	srand(time(NULL));
	int random = low + rand() % (high - low);

	swap(arr[random], arr[low]);

	return partition(arr, low, high);
}

void quickSort(int arr[], int l, int h) //Recursion
{
	if (l < h) 
    {		
		int index = partitionnn(arr, l, h); //index position is sorted now
		
        quickSort(arr, l, index);  // left part sort
		quickSort(arr, index + 1, h); // right part sort
	}
}
