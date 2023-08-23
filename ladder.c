#include<stdio.h>
#include<math.h>
#define pi atan(1.0)*4
int main()
{
    int h,v;
    double x=0,p=0;
    scanf("%d%d",&h,&v);
    p=(pi/180.00)*v*1.00;
    x=h*1.00/(sin(p));
    printf("%.lf\n",ceil(x));
    return 0;
}