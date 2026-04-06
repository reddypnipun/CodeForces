#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, sum = 0;
        scanf("%d", &n);
        char a[n + 1];
        scanf("%s", a);
        char c[26] = {};
        for (int i = 0; i < n; i++)
        {
            int j = a[i] - 'A';
            c[j]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if(c[i]!='\0'){
                sum+=c[i]+1;
            }
        }
        printf("%d\n",sum);
    }
}