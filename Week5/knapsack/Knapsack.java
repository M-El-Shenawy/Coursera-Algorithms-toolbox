import java.util.*;

public class Knapsack {

        static int max(int a, int b) {
        return (a > b)? a:b;
    }

    static int optimalWeight(int W, int[] wList) {
         int n = wList.length;
        int K[][] = new int[n+1][W+1];
        
        for (int i = 0; i <= n; i++) {
            for (int w = 0; w <= W; w++) {
                if (i==0 || w==0)
                    K[i][w] = 0;
                else if (wList[i-1] <= w)
                    K[i][w] = max(wList[i-1] + K[i-1][w-wList[i-1]],  K[i-1][w]);
                else
                    K[i][w] = K[i-1][w];
            }
        }
        
        return K[n][W];
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int W, n;
        W = scanner.nextInt();
        n = scanner.nextInt();
        int[] w = new int[n];
        for (int i = 0; i < n; i++) {
            w[i] = scanner.nextInt();
        }
        System.out.println(optimalWeight(W, w));
    }
}

