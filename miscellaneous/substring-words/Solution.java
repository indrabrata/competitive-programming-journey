import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Solution {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    String input = scanner.nextLine();
    String[] words = scanner.nextLine().split(" ");

    String[] parts = input.split("");
    Map<String, Integer> partCount = new HashMap<>();
    for (String part : parts) {
      partCount.put(part, partCount.getOrDefault(part, 0) + 1);
    }

    int count = 0;
    Map<String, Integer> partCountCopy = new HashMap<>();
    for (String word : words) {
      partCountCopy.putAll(partCount);
      String[] wordParts = word.split("");
      int tempCount = 0;

      for (String wordPart : wordParts) {
        if (partCountCopy.containsKey(wordPart) && partCountCopy.getOrDefault(wordPart, 0) > 0) {
          int currentCount = partCountCopy.get(wordPart);
          partCountCopy.put(wordPart, currentCount - 1);
          tempCount++;
        }
      }

      if (tempCount == wordParts.length) {
        count++;
      }

      partCountCopy.clear();
    }

    // Time Complexity: O(n + (m * k)), where n is the length of the input string, m
    // is the number of words, and k is the average length of the words.
    System.out.println(count);
    scanner.close();
  }
}
