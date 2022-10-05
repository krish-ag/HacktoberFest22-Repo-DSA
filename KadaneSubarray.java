import java.util.Scanner;

//Given an array Arr[] of N integers. 
//Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

class kadanesSubArray {
    static int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    static void maxSubArray(int[] arr, int x) {
        int max_current = arr[0], max_global = arr[0];
        for (int i = 1; i < x; i++) {
            max_current = max(arr[i], max_current + arr[i]);
            if (max_current > max_global) {
                max_global = max_current;
            }
        }
        System.out.println(max_global);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array size");
        int x = sc.nextInt();
        int[] arr = new int[x];
        System.out.println("Enter array elements");
        for (int i = 0; i < x; i++) {
            int j = sc.nextInt();
            arr[i] = j;
        }
        for (int i = 0; i < x; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
        maxSubArray(arr, x);
    }
}
