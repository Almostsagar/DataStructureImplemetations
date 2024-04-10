package patterns;

import java.util.Scanner;

public class pattern_2 {
    public static void main(String[] args) {
        int i, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for(i = 1; i<= n; i++){
            for(j = 0; j < n; j++){
                System.out.print(i);
            }
            System.out.println();
        }
    }
}
/*
Enter a number - 5
11111
22222
33333
44444
55555
*/