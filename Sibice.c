#include<stdio.h>
int main()
{
    int n,w,h,i,l;
    double d;
    scanf("%d",&n);
    scanf("%d%d",&w,&h);
    d=(sqrt((w*w)+(h*h)));
    for(i=1;i<=n;i++)
    {
          scanf("%d",&l);
          if(l<=d)
          {
              printf("DA\n");
          }
          else
          {
            printf("NE\n");
          }
    }

    return 0;
}