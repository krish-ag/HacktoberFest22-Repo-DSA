import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Scanner;

public class topKFrequentElements {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int k = sc.nextInt();

        int ans[] = new int[k];
        ans = topKFrequent(arr, k);

        for (int i = 0; i < k; i++)
            System.out.print(ans[i] + " ");

    }

    public static int[] topKFrequent(int[] nums, int k) {

        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i : nums)
            map.put(i, map.getOrDefault(i, 0) + 1);

        PriorityQueue<Map.Entry<Integer, Integer>> pq = new PriorityQueue<>((a, b) -> b.getValue() - a.getValue());

        for (Map.Entry<Integer, Integer> i : map.entrySet()) {
            pq.add(i);

        }

        int ans[] = new int[k];

        for (int i = 0; i < k; i++)
            ans[i] = pq.remove().getKey();

        return ans;
    }

}
