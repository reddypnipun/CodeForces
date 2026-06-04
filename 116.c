#include <stdio.h>

long long a[100005];

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        
        long long sum_b = 0;
        long long max_a = 0;
        
        for (int i = 0; i < n; i++) {
            long long b_val;
            scanf("%lld", &b_val);
            
            long long larger, smaller;
            if (a[i] > b_val) {
                larger = a[i];
                smaller = b_val;
            } else {
                larger = b_val;
                smaller = a[i];
            }
            
            sum_b += larger;
            
            if (smaller > max_a) {
                max_a = smaller;
            }
        }
        
        printf("%lld\n", sum_b + max_a);
    }
    
    return 0;
}