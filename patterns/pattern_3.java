package patterns;

import java.util.Scanner;

public class pattern_3 {
    public static void main(String[] args) {
        int i, j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number - ");
        int n = sc.nextInt();
        for(i = 1; i<= n; i++){
            for(j = 1; j <= n; j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}

/*
Enter a number - 5
12345
12345
12345
12345
12345
*/