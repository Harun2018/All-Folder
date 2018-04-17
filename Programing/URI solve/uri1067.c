#include<stdio.h>
int main()
{
    int i,a[5],e=0,o=0,p=0,n=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(a[i]>0)
        {
            p++;
        }
        if(a[i]<0)
        {
            n++;
        }

    }
    printf("%d\n",e);
    printf("%d\n",o);
    printf("%d\n",e);
     printf("%d\n",n);


    return 0;
}

