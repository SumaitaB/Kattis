#include<stdio.h>
int main()
{
    int t,i,f=1,n,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        f=1;
        scanf("%d",&n);
        while(n!=1)
        {f=f*n;
        n--;}
        if(f>=10)
        {

            r=f%10;
            f=r;

        }
        printf("%d\n",f);
    }

    return 0;
}