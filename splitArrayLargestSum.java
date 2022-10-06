/*
Given an array nums which consists of non-negative integers and an integer m, you can split the array into m non-empty continuous subarrays.
Write an algorithm to minimize the largest sum among these m subarrays.

Input: nums = [7,2,5,10,8], m = 2
Output: 18
Explanation:
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8],
where the largest sum among the two subarrays is only 18.
*/

public class SplitArrLargSum11 {
  public static void main(String[] args) {
    int[] nums = { 7, 2, 5, 10, 8 };
    int m = 2;
    int ans = splitArray(nums, m);
    System.out.println(ans);
  }

  static int splitArray(int[] nums, int m) {
    int start = 0;
    int end = 0;

    for (int i = 0; i < nums.length; i++) {
      start = Math.max(start, nums[i]); // simple linear search
      end += nums[i];
    }

    while (start < end) {
      // try for the middle as potential answer.
      int mid = start + (end - start) / 2;

      // calculate how many pieces you can divide this in with the max sum.
      int sum = 0;
      int pieces = 1;
      for (int num : nums) {
        if (sum + num > mid) {
          // you cannot add this in this subarray, make new one
          // say you add this num in new subarray, then sum = num
          sum = num;
          pieces++;
        }

        else {
          sum += num;
        }
      }

      if (pieces > m) {
        start = mid + 1;
      }

      else {
        end = mid;
      }
    }

    return end;
  }
}
