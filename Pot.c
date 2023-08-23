#include<stdio.h>
int main()
{
    int n,i,p,r=0,x=0,q=1,j;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        r=0;
        q=1;

        scanf("%d",&p);

        r=p%10;
        p=p/10;

        for(j=1;j<=r;j++)
        {
            q=q*p;
        }
        x+=q;
    }
    printf("%d\n",x);

    return 0;
}