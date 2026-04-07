#include <stdio.h>

int main(){
    int a, b, c;
    long long h = 0;
    scanf("%d %d %d", &a, &b, &c);

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                int x = i * j * k;
                for(int m = 1; m * m <= x; m++){
                    if(x % m == 0){
                        if(m * m == x)
                            h += 1;
                        else
                            h += 2;
                    }
                }
            }
        }
    }

    printf("%lld", h);
    return 0;
}
