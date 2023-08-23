#include<stdio.h>
int main()
{
    int n[6],a[6]={1,1,2,2,2,8},i;
    scanf("%d%d%d%d%d%d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5]);
    for(i=0; i<6; i++)
    {
        if(n[i]>a[i])
        {
            a[i]=a[i]-n[i];
        }
        else if(n[i]<=a[i])
        {
            a[i]=a[i]-n[i];
        }
    }
    printf("%d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
    return 0;
}