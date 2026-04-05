#include <stdio.h>
 
long long primes[10005];
int is_not_prime[120000];
 
void find_primes() {
    int count = 0;
    for (int i = 2; i < 120000 && count < 10005; i++) {
        if (is_not_prime[i] == 0) {
            primes[count++] = i;
            for (int j = i * 2; j < 120000; j += i) {
                is_not_prime[j] = 1;
            }
        }
    }
}
 
int main() {
    find_primes();
    int t, n;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        if (scanf("%d", &n) != 1) break;
        for (int i = 0; i < n; i++) {
            printf("%lld%c", primes[i] * primes[i + 1], (i == n - 1 ? '\n' : ' '));
        }
    }
    return 0;
}