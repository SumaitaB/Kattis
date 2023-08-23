#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,n,k,c=0;
    char ct[200][30];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%s",&ct[j]);
        }
        c=0;
        for(j=0; j<n; j++)
        {
            for(k=n-1; k>j; k--)
            {
                if(strcmp(ct[j],ct[k])==0)
                {
                    c++;
                    break;
                }
            }
        }
        printf("%d\n",n-c);
    }
    return 0;
}