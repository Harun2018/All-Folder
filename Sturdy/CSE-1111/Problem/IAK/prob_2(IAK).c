///Date:08.04.2018
#include<stdio.h>
int main()
{
    int a[100],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        if(a[i]<=50)
        {
            printf("%d ",i);
        }
    }


    return 0;
}
