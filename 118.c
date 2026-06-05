#include <stdio.h>

int main() {
    int t;
    
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long n, x, y, k, a, d;
        scanf("%lld %lld %lld %lld", &n, &x, &y, &k);
        
        if (x > y) {
            a = x - y;
        } else {
            a = y - x;
        }
        
        if (a < n - a) {
            d = a;
        } else {
            d = n - a;
        }
        
        if (n <= 3) {
            printf("1\n");
        } else {
            printf("%lld\n", d + k);
        }
    }
    
    return 0;
}