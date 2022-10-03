import java.util.*void countSort(int arr[],int range){int count[]=new int[range];Int ans[]=new int[arr.length];

for(int i=0;i<arr.length;i++)count[arr[i]]++;

for(int i=1;i<range;i++)count[i]+=count[i-1];

for(int i=0;i<arr.length;i++){ans[count[arr[i]]-1]=arr[i];Count[arr[i]]--;}

for(int i=0;i<arr.length;i++)arr[i]=ans[i];}

public static void main(String[]args){

Scanner sc=new scannerf(System.in);

int n=sc.nextInt();

int arr[]=new int[n];

for(int i=0;i<n;i++)arr[i]=sc.nextInt();

System.out.println("Before sorting:");

for(int i=0;i<n;i++)System.out.print(arr[i]+" ");

countSort(arr,n);

System.out.println("After sorting:");

for(int i=0;i<n;i++)System.out.print(arr[i]+" ");

System.out.println();}