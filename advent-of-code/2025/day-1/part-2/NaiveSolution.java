import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class NaiveSolution {
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
      char nav = rotation.charAt(0);
      long temp = Long.parseLong(rotation.substring(1));

      if (nav == 'L') {
        while (temp > 0) {
          dial -= 1;
          if (dial == -1) {
            dial = 99;
          }

          if (dial == 0) {
            counter += 1;
          }

          temp--;
        }
      } else if (nav == 'R') {
        while (temp > 0) {
          dial += 1;
          if (dial == 100) {
            dial = 0;
          }

          if (dial == 0) {
            counter += 1;
          }

          temp--;
        }
      }
    }

    System.out.println("password : " + counter);
  }
}
