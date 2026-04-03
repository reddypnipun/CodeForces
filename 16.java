import java.util.*;
public class S16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            String s = sc.next(); 
            if (n != 5) {
                System.out.println("NO");
                continue;
            }
            char[] arr = s.toCharArray();
            char[] target = "Timur".toCharArray();
            Arrays.sort(arr);
            Arrays.sort(target);
            if (Arrays.equals(arr, target)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}