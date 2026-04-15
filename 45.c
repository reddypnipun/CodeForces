#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[60];
        scanf("%s",s);
        int freq[26]={0};
        for(int i=0;s[i];i++)
            freq[s[i]-'a']++;

        for(int i=0;i<26;i++)
        {
            if(freq[i]==1)
                printf("%c",'a'+i);
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]==2)
                printf("%c%c",'a'+i,'a'+i);
        }
        printf("\n");
    }
}