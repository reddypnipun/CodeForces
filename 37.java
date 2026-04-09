import java.util.*;
public class code {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int x = sc.nextInt();

            int[] a = new int[2*n];
            for(int i=0;i<2*n;i++)
                a[i]=sc.nextInt();

            Arrays.sort(a);

            boolean ok = true;

            for(int i=0;i<n;i++){
                if(a[i+n] - a[i] < x){
                    ok = false;
                    break;
                }
            }

            System.out.println(ok ? "YES" : "NO");
        }
    }
}