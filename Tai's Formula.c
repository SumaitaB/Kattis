#include<stdio.h>

long long int harshad(long long int x)
{
    long long int i,j,r=0,sum=0;
    for(i=x;; i++)
    {
        j=i;
        sum=0;
        r=0;
        while(j!=0)
        {
            r=j%10;
            sum+=r;
            j=j/10;

        }
        if(i%sum==0)break;
    }
    return i;
}
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    sum=harshad(n);
    printf("%lld\n",sum);
    return 0;
}

