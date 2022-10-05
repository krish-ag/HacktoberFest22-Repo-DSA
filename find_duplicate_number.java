import java.util.Arrays;
import java.util.Scanner;

public class find_duplicate_number {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int duplicate = findDuplicate(arr);

        System.out.println(duplicate);
    }

    public static int findDuplicate(int[] nums) {

        int n = nums.length;
        Arrays.sort(nums);

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return nums[i];

            }
        }
        return 0;
    }

}
