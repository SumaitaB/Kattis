#include<stdio.h>
int main()
{
    int i,n[5],a=0,b=0,c=0,d=0,max=-999999,count=0;
    for(i=0;i<5;i++)
    {
    scanf("%d%d%d%d",&a,&b,&c,&d);
    n[i]=a+b+c+d;
    }
    for(i=0;i<5;i++)
    {
        if(n[i]>max)
        {
            max=n[i];
            count=i;
        }
    }
    printf("%d %d\n",count+1,n[count]);





    return 0;
}
