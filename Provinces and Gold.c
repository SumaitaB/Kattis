#include<stdio.h>
int main()
{
    int g,s,c,bp;
    scanf("%d%d%d",&g,&s,&c);
    g+s+c<=5;
    bp=3*g+2*s+1*c;
    if(bp>=0&&bp<=2)
    {
        if(bp>=0&&bp<=1)
        {
            printf("Copper\n");

        }
        else if(bp>=2&&bp<=4)
        {
            printf("Estate or Copper\n");

        }
    }
    else if(bp>=3&&bp<=5)
    {
        if(bp>=2&&bp<=4)
        {
            printf("Estate or Silver\n");
        }
        else if(bp>=5&&bp<=7)
        {
            printf("Duchy or Silver\n");
        }

    }
    else if(bp>=6)
    {
        if(bp>=5&&bp<=7)
        {
            printf("Duchy or Gold\n");
        }
        else if(bp>=8)
        {
            printf("Province or Gold\n");
        }

    }

    return 0;
}
