#include<stdio.h>
int main()
{
    long long int i,k,p,n,b,j,r=0,s=0,x,y=1;
        scanf("%lld",&p);
    for(i=1; i<=p; i++)
    {
        scanf("%lld%lld%lld",&k,&b,&n);
        r=0;
        s=0;
        x=n;
        y=1;
          while(x!=0)
        {
            r=x%b;
            s=s+r*y;
            x=x/b;
            y=y*10;
        }
        j=0;
        r=0;
            while(s!=0)
        {
            r=s%10;
            j=j+r*r;
            s=s/10;
        }
        printf("%lld %lld\n",k,j);
    }
    return 0;
}


