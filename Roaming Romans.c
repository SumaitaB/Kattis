#include<stdio.h>
int main()
{
    double x,pace;
    scanf("%lf",&x);
    pace=(1000*x*5280)/4854;

    printf("%.lf\n",pace);



    return 0;
}
