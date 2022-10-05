#include <bits/stdc++.h> 
using namespace std; 


  long long ValidPair(int arr[], int n) 
  { 
  	sort(arr,arr+n);
  	long long cnt=0;
  	int i=0,j=n-1;
  	while(i<j)
  	{
  	    if(arr[i]+arr[j]>0)
  	    {
  	        cnt+=(j-i);
  	        j--;
  	    }
  	    else i++;
  	}
  	return cnt;
  }   



int main() 
{ 

	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; ++i)
		cin>>array[i];
  
	cout << ValidPair(array, n) <<"\n";
	return 0; 
} 

// input : 
// 3
// 3 -2 1

// output :
// 2
