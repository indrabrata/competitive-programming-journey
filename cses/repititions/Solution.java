package cses.repititions;

import java.util.Scanner;

public class Solution {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      char[] s = sc.nextLine().toCharArray();

      int finalCounter = 1;

      int low = 0;
      int high = 1;

      while (high < s.length) {
         if (s[low] == s[high]) {
            finalCounter = Math.max(finalCounter, high - low + 1);
            high++;
         } else {
            low = high;
            high++;
         }
      }

      System.out.println(finalCounter);

      sc.close();
   }
}
