#include<stdio.h>
int main()
{
    int x,n,i,p,q=0;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%d",&p);
         q=q+(x-p);

    }
    printf("%d\n",q+x);

    return 0;
}