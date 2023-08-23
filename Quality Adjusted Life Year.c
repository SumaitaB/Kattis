#include<stdio.h>
int main()
{
    int n,i;
    double q,y,qaly=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          scanf("%lf%lf",&q,&y);
          qaly+=q*y;
    }
    printf("%.3lf\n",qaly);

    return 0;
}