package patterns;

import java.util.Scanner;

public class pattern_9 {
    public static void main(String[] args) {
        int k = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print(k * j);
            }
            k++;
            System.out.println();
        }
        sc.close();
    }
}

/*
 * Enter a number - 5
 * 12345
 * 246810
 * 3691215
 * 48121620
 * 510152025
 */