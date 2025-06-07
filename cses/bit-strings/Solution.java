import java.util.Scanner;

public class Solution {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);

      long n = sc.nextLong();

      System.out.println((long) Math.pow(2, n) % 1000000007);

      sc.close();

   }
}
