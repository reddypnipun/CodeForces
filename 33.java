import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String b = sc.next();

        int k1 = 0, k2 = 0;
        char[] a = b.toCharArray();

        for (int i = 0; i < n; i++) {
            if (a[i] != '4' && a[i] != '7') {
                System.out.println("NO");
                return;
            }

            int digit = a[i] - '0';

            if (i < n / 2)
                k1 += digit;
            else
                k2 += digit;
        }

        if (k1 == k2)
            System.out.println("YES");
        else
            System.out.println("NO");

        sc.close();
    }
}
