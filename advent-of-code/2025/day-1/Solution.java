import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {

  public static void main(String[] args) {
    File fileObj = new File("input.txt");

    List<String> rotations = new ArrayList<>();
    try (Scanner myReader = new Scanner(fileObj)) {
      while (myReader.hasNextLine()) {
        String data = myReader.nextLine();
        rotations.add(data);
      }
    } catch (FileNotFoundException e) {
      System.out.println("an error occurred: The file was not found.");
      e.printStackTrace();
    }

    long counter = 0;
    long dial = 50;
    for (String rotation : rotations) {
      if (rotation.isBlank()) {
        continue;
      }

      char nav = rotation.charAt(0);
      long temp = Long.parseLong(rotation.substring(1));

      switch (nav) {
        case 'L':
          dial = dial - temp;
          break;
        case 'R':
          dial = dial + temp;
          break;
        default:
          System.out.println("invalid navigation");
          System.exit(1);
      }

      if (dial < 0) {
        dial = ((dial % 100) + 100) % 100;
      } else if (dial > 99) {
        dial = (dial % 100) % 100;
      }

      if (dial == 0) {
        counter++;
      }
    }

    System.out.println("password : " + counter);
  }
}
