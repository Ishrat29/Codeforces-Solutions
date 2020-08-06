#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m,temp;
    char s[100];
    scanf("%s",s);
    m=strlen(s);
    for(i=0;i<m;i=i+2)
    for(j=i+2;j<m;j=j+2)
    {
        if(s[i]>s[j])
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
    printf("%s",s);
    return 0;

}
