package patterns;

import java.util.Scanner;

public class pattern_15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (int i = 0; i <= n; i++) {
            for (int k = i; k < n; k++) {
                System.out.print("  ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            for (int l = 0; l < i; l++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}

/*

     *
    ***
   *****
  *******
 *********
***********

 */