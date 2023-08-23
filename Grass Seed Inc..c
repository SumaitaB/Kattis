#include<stdio.h>

int main()
{
    int l,i;
    double x=0,c,tc,len,wid,p=0;
    scanf("%lf",&c);
    scanf("%d",&l);
    for(i=1; i<=l; i++)
    {
        scanf("%lf%lf",&wid,&len);
        p=len*wid;
        x+=p;
    }
    tc=(c*x);
    printf("%.8lf\n",tc);
    return 0;
}