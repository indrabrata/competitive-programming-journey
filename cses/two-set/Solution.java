import java.util.Scanner;

public class Solution {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int sum = (n * (n + 1)) / 2;

      if (sum % 2 != 0) {
         System.out.println("NO");
         System.exit(0);
      }

      int[] set1;
      int[] set2;

      if (n % 2 == 0) {
         set1 = new int[n / 2];
         set2 = new int[n / 2];

         int n1 = 1;
         int n2 = 2;

         set1[0] = n1;
         set2[0] = n2;

         for (int i = 1; i < set1.length; i++) {
            if (i % 2 != 0) {
               set1[i] = n1 + 3;
               set2[i] = n2 + 1;
            } else {
               set1[i] = n1 + 1;
               set2[i] = n2 + 3;
            }

            n1 = set1[i];
            n2 = set2[i];
         }
      } else {
         set1 = new int[(n / 2) + 1];
         set2 = new int[n / 2];

         int n1 = 2;
         int n2 = 3;

         set1[0] = n1 - 1;
         set1[1] = n1;
         set2[0] = n2;

         for (int i = 1; i < set2.length; i++) {
            if ((i + 1) % 2 == 0) {
               set1[i + 1] = n2 + 3;
               set2[i] = n2 + 1;
            } else {
               set1[i + 1] = n2 + 1;
               set2[i] = n2 + 3;
            }

            n1 = set1[i + 1];
            n2 = set2[i];
         }
      }

      System.out.println("YES");
      System.out.println(set1.length);
      for (int i = 0; i < set1.length; i++) {
         System.out.print(set1[i] + " ");
      }

      System.out.println();
      System.out.println(set2.length);
      for (int i = 0; i < set2.length; i++) {
         System.out.print(set2[i] + " ");
      }

      sc.close();
   }
}
