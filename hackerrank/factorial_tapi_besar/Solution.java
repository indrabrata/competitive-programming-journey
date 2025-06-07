package hackerrank.factorial_tapi_besar;

import java.util.HashMap;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int n = scanner.nextInt();
    HashMap<Integer, Long> memo = new HashMap<>();
    scanner.nextLine();
    for (int i = 0; i < n; i++) {
      int x = scanner.nextInt();
      System.out.println(factorial(x, memo));
    }

    scanner.close();
  }

  static long factorial(int n, HashMap<Integer, Long> memo) {
    if (n == 0) {
      return 1;
    }

    if (memo.containsKey(n)) {
      return memo.get(n);
    }

    long result = (n * factorial(n - 1, memo)) % 1000000007;
    memo.put(n, result);
    return result;
  }
}
