#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);

    a=n/365;
    n=n-a*365;
    printf("%d ano(s)\n",a);

    a=n/30;
    printf("%d mes(es)\n",a);
    n=n-a*30;
    printf("%d dia(s)\n",n);



    return 0;
}

