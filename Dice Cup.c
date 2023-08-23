#include<stdio.h>

int main()
{
    int n,m,i,j,temp,a[500]={0},p=0,max=-99999;
    scanf("%d%d",&n,&m);
    if(m<n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            p=i+j;
            a[p]++;
        }
    }
    for(i=2; i<450; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=2; i<450; i++)
    {
        if(a[i]==max)
        {
            printf("%d\n",i);
        }
    }


    return 0;
}