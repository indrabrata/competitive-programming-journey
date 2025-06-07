import java.util.Scanner;

public class Solution {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int x = sc.nextInt();
      int y = sc.nextInt();

      boolean[][] arr = new boolean[x][y];

      int counter = 0;

      for (int i = 0; i < x; i++) {
         for (int j = 0; j < y - 1; j += 2) {
            if (!(arr[i][j] || arr[i][j + 1])) {
               arr[i][j] = true;
               arr[i][j + 1] = true;
               counter++;
            }
         }
      }

      for (int i = 0; i < x - 1; i += 2) {
         for (int j = 0; j < y; j++) {
            if (!(arr[i][j] || arr[i + 1][j])) {
               arr[i][j] = true;
               arr[i + 1][j] = true;
               counter++;
            }
         }
      }

      System.out.println(counter);
      sc.close();
   }
}
