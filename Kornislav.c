#include<stdio.h>
int main()
{
    //smallest integer*second largest integer
    int a[6],area,i,max=-1,min=9999,c=0;
    for(i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<4; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            c=i;
        }
    }
    max=-1;
      for(i=0;i<4; i++)
    {
        if(i!=c && max<a[i])
        {
            max=a[i];
        }
    }
      for(i=0; i<4; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    area=max*min;
    printf("%d\n",area);

    return 0;
}

