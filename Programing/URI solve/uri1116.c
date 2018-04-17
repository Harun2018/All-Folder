#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b!=0)
        {
            printf("%0.1f\n",(float)a/b);
        }
        else
            printf("divisao impossivel\n");

    }

    return 0;
}

