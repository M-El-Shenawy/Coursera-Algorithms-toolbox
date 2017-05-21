/*
  Author: Mohamed Elshenawy
  Date: 21/5/2017
*/
import java.util.Scanner;

public class Change {
  private static int getChange(int m) {
    // write your code here
    int n = 0;
    while (m > 0) {
      if (m >= 10) {
        m -= 10;
        n++;
      } else if (m < 10 && m > 4) {
        m -= 5;
        n++;
      } else {
        m -= 1;
        n++;
      }
    }
    return n;
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int m = scanner.nextInt();
    System.out.println(getChange(m));
  }
}
