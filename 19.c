#include <stdio.h>
#include <string.h>

int main()
{
    int t, p1 = 0, p2 = 0, p3 = 0;
    scanf("%d", &t);
    int yn=0;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char a[n + 1];
        scanf("%s", a);
        int i = 0;
        int count = 0;
        yn=0;
        if(n==2) {
            printf("NO\n");
            continue;
        }
        while (i < n)
        {
            if (count % 2 == 0 )
            {
                    i++;
                    count++;
            }
            else
            {
                if (i + 1 >= n || a[i] != a[i+1])
                {
                    yn++;
                    printf("NO\n");
                    break;
                }
                else{
                    i+=2;
                    count++;
                }
            }
        }
        if(yn==0) printf("YES\n");        
    }
}