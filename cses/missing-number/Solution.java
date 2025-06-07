import java.util.Scanner;

public class Solution {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      long sum = (n * (n + 1)) / 2;
      long counter = 0;

      for (int i = 0; i < n - 1; i++) {
         counter += sc.nextLong();
      }

      System.out.println(sum - counter);

      sc.close();
   }
}
