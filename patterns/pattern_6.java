package patterns;

import java.util.Scanner;

public class pattern_6 {
    public static void main(String[] args) {
        int i, j;
        int k = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for (i = n; i > 0; i--) {
            for (j = n; j > 0; j--) {
                System.out.print(k++);
            }
            System.out.println();
        }
    }

}

/*
 * Enter a number - 5
 * 12345
 * 678910
 * 1112131415
 * 1617181920
 * 2122232425
 */
