#include<stdio.h>
int main()
{
    int n,r,e,c,i,p=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&r,&e,&c);
        p=e-c;
        if(p<r)
        {
            printf("do not advertise\n");
        }
        else if(p>r)
        {
            printf("advertise\n");
        }
        else if(r==p)
        {
            printf("does not matter\n");
        }
    }
    return 0;
}