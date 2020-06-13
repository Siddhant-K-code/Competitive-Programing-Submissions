import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // Your code here!
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        
        // process: 「光が届く電球の数を光の強さにする」をk回繰り返す
        // ex. 1,0,0,1,0
        // *-
        //  *
        //   *
        //   -*-
        //     -    => 1,2,2,1,2 (k = 1)
        // *-
        // -*--
        // --*--
        //   -*-
        //   --*    => 3,3,4,4,3 (k = 2)
        
        while (k-- > 0) {
            int[] start = new int[n];
            int[] end = new int[n];
            for(int i = 0; i < n; i++) {
                start[i] = Math.max(0, i-array[i]);
                end[i] = Math.min(n-1, i+array[i]);
            }
            
            // imos法: 累積和の区間版
            // sum[i]: 時刻iで放送中の番組数
            int[] sum = new int[n+1];
            for (int i = 0; i < n; i++) {
                // 時刻start[i]で放送番組が1増える
                // 時刻end[i]+1で放送番組が1減る
                sum[start[i]]++;
                sum[end[i] + 1]--;
            }
            for (int i = 0; i < n; i++) {
                sum[i + 1] += sum[i];
            }
            
            long now = 0;
            for (int i = 0; i < n; i++) {
                array[i] = sum[i];
                now += array[i];
            }
            long max = (long)n * n;
            if (now == max) {
                for (int i = 0; i < n; i++) {
                    System.out.print(array[i]);
                    if (i != n - 1) {
                        System.out.print(" ");
                    } else {
                        System.out.println();
                    }
                }
                // System.out.println(k);
                return;
            }
            
            // System.out.println(Arrays.toString(sum));
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(array[i]);
            if (i != n - 1) {
                System.out.print(" ");
            } else {
                System.out.println();
            }
        }
    }
}