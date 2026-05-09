import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            char[] a = s.toCharArray();
            Arrays.sort(a);
            boolean ok = true;
            for (int i = 1; i < a.length; i++) {
                if (a[i] != a[i - 1] + 1) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }
}