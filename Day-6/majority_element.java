import java.util.*;

public class MajorityElement {
    public static List<Integer> findMajority(int[] arr) {
        int n = arr.length;
        Map<Integer, Integer> freq = new HashMap<>();
        List<Integer> ans = new ArrayList<>();

        for (int num : arr) {
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        int majority = n / 3;
        for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
            if (entry.getValue() > majority) {
                ans.add(entry.getKey());
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,1,1,2,2,2};
        List<Integer> result = findMajority(arr);
        System.out.println(result);
    }
}
