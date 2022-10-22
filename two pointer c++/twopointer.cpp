#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n = 6; // array size

  int arr[n] = {1 , 3, 7, 8, 10, 13 };

  int target_sum = 9;

  bool possible = false;

  int i,j;
  for( i = 0 ; i < n ; i++ )
  {
    
    for( j = i+1 ; j<n ; j++ )
    {
      if( arr[i] + arr[j] == target_sum)
      {
        possible = true;
        break;
      }
    }

    if(possible == true) break; // we have got a pair that sums to target_sum
  }


  if(possible)
  {
    cout<<"index1 : "<<i<<" , index2 : "<<j<<endl;

    cout<<"value at index1 : "<<arr[i]<<endl;
    cout<<"value at index2 : "<<arr[j]<<endl;
  }
  else
  {
    cout<<"No two elements sums to the given target\n";
  }
}