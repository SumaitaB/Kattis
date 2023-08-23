#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,i,p=0;
    char a[35];
    scanf("%s",&a);
    x=strlen(a);
    for(i=0; i<x; i++)
    {
        if(a[i]=='s'&&a[i+1]=='s')
        {
            p=1;

        }
    }

    if(p==1)
    {
        printf("hiss\n");
    }
    else
    {
        printf("no hiss\n");
    }
    return 0;
}