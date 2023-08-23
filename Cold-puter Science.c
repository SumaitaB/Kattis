#include<stdio.h>
int main()
{
    int n,t,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%d",&t);
         if(t<0)
         {
             count++;
         }
    }
    printf("%d\n",count);
    return 0;
}
