#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n%2==1)
    {
        printf("Alice\n");
    }
    else if(n%2==0)
    {
        printf("Bob\n");
    }


    return 0;
}