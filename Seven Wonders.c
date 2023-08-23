#include<stdio.h>
#include<string.h>
int main()
{
    char a[55];
    int n,i,b[5],sum=0,min=999;
    scanf("%s",&a);
    n=strlen(a);
    for(i=0; i<3; i++)
    {
        b[i]=0;
    }
    for(i=0; i<n; i++)
    {
        if(a[i]=='T')
        {
            b[0]++;
        }
        else if(a[i]=='C')
        {
            b[1]++;
        }
        else if(a[i]=='G')
        {
            b[2]++;
        }
    }
    for(i=0; i<=2; i++)
    {
        if(min>b[i])
        {
            min=b[i];
        }
    }
    sum=b[0]*b[0]+b[1]*b[1]+b[2]*b[2]+min*7;
    printf("%d\n",sum);

    return 0;
}
