#include<stdio.h>

int main()
{
    int x,i,j;
    for(i=1; i<=30; i++)
    {
        for(j=1; j<=51; j++)
        {
            if(x!=1||x!=-1)
            {
                x=1||-1;
            }
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}
