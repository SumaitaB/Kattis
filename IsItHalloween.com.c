#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    if((a[0]=='O'&&a[4]=='3'&&a[5]=='1')||(a[0]=='D'&&a[4]=='2'&&a[5]=='5'))
    {
        printf("yup\n");
    }
    else
    {
        printf("nope\n");
    }
    return 0;
}