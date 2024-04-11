package patterns;

import java.util.Scanner;

public class pattern_10 {
    public static void main(String[] args) {
        int i, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (i = 0; i <= n; i++) {
            for (j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}

/*
 Enter a number - 5
 *
 **
 ***
 ****
 *****
 */