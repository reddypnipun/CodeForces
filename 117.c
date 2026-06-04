#include <stdio.h>

int main() {
    int t;
    long long ct, ch, cu;
    
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long count = 0;
        scanf("%lld %lld %lld", &ct, &ch, &cu);
        
        if (ct > cu) { 
            count += 4 * cu; 
            ct -= cu; 
            cu = 0; 
        } else { 
            count += 4 * ct; 
            cu -= ct; 
            ct = 0; 
        }
        
        if (ct > 2 * ch) {
            count += 7 * ch; 
            ct -= 2 * ch; 
            ch = 0;
        } else {
            long long pairs = ct / 2;
            count += 7 * pairs;
            ch -= pairs;
            ct -= 2 * pairs; 
        }
        
        if (ct > ch) { 
            count += 5 * ch; 
            ct -= ch; 
            ch = 0; 
        } else { 
            count += 5 * ct; 
            ch -= ct; 
            ct = 0; 
        }
        
        if (ct > 0) {
            count += (2 * ct + 1);
        }
        
        count += (3 * (ch + cu));
        
        printf("%lld\n", count);
    }
    return 0;    
}