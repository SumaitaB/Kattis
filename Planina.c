#include<stdio.h>
int main()
{
    int n,x,stored;
    scanf("%d",&n);
    x=pow(2,n)+1;
    stored=x*x;
    printf("%d\n",stored);

    return 0;
}