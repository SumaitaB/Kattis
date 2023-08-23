#include<stdio.h>
#include<string.h>
int main()
{
    char a[55];
    int n=0,i,b[5],temp=0,c=0;
    scanf("%s",&a);
    n=strlen(a);
    b[1]=1;
    b[2]=0;
    b[3]=0;
    for(i=0; i<n; i++)
    {
        if(a[i]=='A')
        {
            temp=b[1];
            b[1]=b[2];
            b[2]=temp;
        }
        else if(a[i]=='B')
        {
            temp=b[2];
            b[2]=b[3];
            b[3]=temp;
        }
        if(a[i]=='C')
        {
            temp=b[3];
            b[3]=b[1];
            b[1]=temp;
        }
    }
    for(i=1; i<=3; i++)
    {
        if(b[i]==1)
        {
            c=i;
            break;
        }
    }
    printf("%d\n",c);

    return 0;
}
