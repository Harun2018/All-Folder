#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    if(n%2==0)
    {
       for(i=1;i<=12;i=i+2)
        {
            a=n+i;
            printf("%d\n",a);
        }

    }
    else
    {
       for(i=2;i<=12;i=i+2)
        {
            a=n+i;
            printf("%d\n",a);
        }
    }


    return 0;
}
