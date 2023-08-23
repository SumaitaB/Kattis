#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    double area,s;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=(a+b+c+d)/(2*1.00);
    area=(sqrt((s - a) *(s - b) *(s - c) *(s - d)));
    printf("%.16lf\n",area);
    return 0;
}
