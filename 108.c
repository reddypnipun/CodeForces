#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[105];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int min_calls = 101;
        for (int i = 0; i < n; i++) {
            int left = 0, right = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] < a[i]) left++;
                if (a[j] > a[i]) right++;
            }
            int current_calls = (left > right) ? left : right;
            if (current_calls < min_calls) {
                min_calls = current_calls;
            }
        }
        printf("%d\n", min_calls);
    }
    return 0;
}