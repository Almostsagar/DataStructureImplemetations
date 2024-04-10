package patterns;

import java.util.Scanner;

public class pattern_8 {
    public static void main(String[] args) {
        int i, j;
        int k = 2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (i = n; i > 0; i--) {
            for (j = n; j > 0; j--) {
                System.out.print(k);
                k += 2;
            }
            System.out.println();
        }
    }
}

/*
 * Enter a number - 5
 * 246810
 * 1214161820
 * 2224262830
 * 3234363840
 * 4244464850
 */