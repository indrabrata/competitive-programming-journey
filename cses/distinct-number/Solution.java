import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Solution {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      long n = sc.nextLong();

      Set<Long> set = new HashSet<>(200000);
      for (int i = 0; i < n; i++) {
         set.add(sc.nextLong());
      }

      System.out.println(set.size());
      sc.close();
   }
}
