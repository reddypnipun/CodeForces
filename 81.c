#include <stdio.h>
#include <string.h>
int main() {
    int n, sf = 0, fs = 0;
    char s[105];
    scanf("%d", &n);
    scanf("%s", s);
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == 'S' && s[i + 1] == 'F')
            sf++;
        else if(s[i] == 'F' && s[i + 1] == 'S')
            fs++;
    }
    if(sf > fs)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}