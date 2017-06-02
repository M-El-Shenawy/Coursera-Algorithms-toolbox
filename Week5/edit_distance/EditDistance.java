import java.util.*;

class EditDistance {

  public static int min(int x, int y) {
        return (x>y)?y:x;
    }

  public  static int min(int x, int y, int z) {
        return min(min(x, y), z);
    }
  public static int EditDistance(String s, String t) {

    int m = s.length(), n = t.length();
    int[][] dp = new int[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
      for (int j = 0; j <= n; j++) {
        if (i == 0)
          dp[i][j] = j;

        else if (j == 0)
          dp[i][j] = i;

        else if (s.charAt(i - 1) == t.charAt(j - 1))
          dp[i][j] = dp[i - 1][j - 1];

        else
          dp[i][j] = 1 +  min(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]);
      }
    }

    return dp[m][n];
  }
  public static void main(String args[]) {
    Scanner scan = new Scanner(System.in);

    String s = scan.next();
    String t = scan.next();

    System.out.println(EditDistance(s, t));
  }
}
