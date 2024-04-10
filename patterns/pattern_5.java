package patterns;

import java.util.Scanner;

public class pattern_5 {
    public static void main(String[] args) {
        int i, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (i = n; i > 0; i--) {
            for (j = n; j > 0; j--) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

}

/*
 * Enter a number -
 * 5
 * 54321
 * 54321
 * 54321
 * 54321
 * 54321
 */
