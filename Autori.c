#include<stdio.h>
int main()
{
    char a[50],i;
    scanf("%s",&a);
     printf("%c",a[0]);
    for(i=0;i<50;i++)
    {
        if(a[i]==45)
        {
    printf("%c",a[i+1]);
        }

    }
    printf("\n");

    return 0;
}