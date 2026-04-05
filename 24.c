#include <stdio.h>
#include <stdlib.h>
int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[7];
        for (int i = 0; i < 7; i++)
        {
        scanf("%d",&a[i]);
        }
        qsort(a,7,sizeof(int),comp);
        printf("%d\n",a[6]-a[5]-a[4]-a[3]-a[2]-a[1]-a[0]);           
    }
}