import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int n = scanner.nextInt();

    int[] nums = new int[n];

    for (int i = 0; i < n; i++) {
      nums[i] = scanner.nextInt();
    }

    List<List<Integer>> ans = permute(nums);
    System.out.println(ans);
    scanner.close();
  }

  public static List<List<Integer>> permute(int[] nums) {
    List<List<Integer>> ans = new ArrayList<>();
    solve(nums, new HashSet<>(), new ArrayList<>(), ans);
    return ans;
  }

  public static void solve(int[] nums, Set<Integer> usedNums, List<Integer> list, List<List<Integer>> ans) {
    if (list.size() == nums.length) {
      ans.add(new ArrayList<>(list));
      return;
    }

    for (int i = 0; i < nums.length; i++) {
      if (usedNums.contains(nums[i])) {
        continue;
      }

      list.add(nums[i]);
      usedNums.add(nums[i]);

      solve(nums, usedNums, list, ans);

      list.remove(list.size() - 1);
      usedNums.remove(nums[i]);
    }
  }
}