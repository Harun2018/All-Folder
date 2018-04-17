#include<stdio.h>
int main()
{
    int a[100],i,b,large=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
            b=i;
        }
    }
    printf("%d\n",large);
    printf("%d\n",b);



    return 0;
}
