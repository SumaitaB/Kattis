#include<stdio.h>

int main()
{
    int i,n,b;
    double p,t,abpm,bpm;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    scanf("%d %lf",&b,&p);
       bpm=(60.00*b)/p;
       abpm=60/p;
       printf("%.4lf %.4lf %.4lf\n",(bpm-abpm),bpm,(bpm+abpm));
    }
    return 0;
}