#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i;
    char s[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",s);
        m=strlen(s);

        if(m>10)
        {

            printf("%c%d%c\n",s[0],m-2,s[m-1]);
        }
        else
        {
            printf("%s\n",s);
        }
    }

    return 0;
}
