#include<stdio.h>
#include<string.h>
int main()
{
    char a[20][30],b[20][30];
    int i,j,k,n,x,p;
    while(1)
    {
        k=1;
        scanf("%d",&n);
        x=n-1;
        if(n==0)break;

        for(i=0; i<n; i++)
        {
            scanf("%s",&a[i]);
        }

        for(i=0; i<20; i++)
        {
            for(j=0; j<30; j++)
            {
                b[i][j]='\0';
            }
        }

        printf("SET %d\n",k);

        for(i=0; i<n; i++)
        {
            j=0;
            while(a[i][j]!='\0')
            {
                b[i][j]=a[i*2][j];
                //b[x-i][j]= a[i+1][j];
                j++;
            }
        }
         for(i=n-1; i>0; i--)
        {
            j=0;
            while(a[i][j]!='\0')
            {
                b[i][j]=a[i*2+1][j];
                //b[x-i][j]= a[i+1][j];
                j++;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%s\n",b[i]);
        }
        k++;
    }
    return 0;
}

