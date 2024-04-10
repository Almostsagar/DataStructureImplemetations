package patterns;

import java.util.Scanner;

public class pattern_4 {
    public static void main(String[] args) {
        int i, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for(i = n; i> 0; i--){
            for(j = n; j > 0; j--){
                System.out.print(i);
            }
            System.out.println();
        }
    }
}
/*

Enter a number - 5
55555
44444
33333
22222
11111

*/