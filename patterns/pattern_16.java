package patterns;

import java.util.Scanner;

public class pattern_16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (int i = 0; i <= n; i++) {
            for (int k = 0; k < i; k++) {
                System.out.print("  ");
            }
            for (int j = i; j <= n; j++) {
                System.out.print("* ");
            }
            for (int l = i; l < n; l++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}

/*

***********
 *********
  *******
   *****
    ***
     *

 */