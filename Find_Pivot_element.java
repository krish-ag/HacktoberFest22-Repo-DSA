package Searching_Sorting;

class Find_Pivot_element{
    public static void main(String[] args) {
        int[] arr= {3,8,10,17,1};
        System.out.print("pivot is : " + getpivot(arr, 5));
    }
    static int getpivot(int arr[] , int n){
        int s = 0;
        int e =  n - 1;
        int mid = s + (e-s)/2;

        while(s<e){
            if(arr[mid]>= arr[0]){
                s=mid + 1;
            }
            else{
                e = mid ;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
}
