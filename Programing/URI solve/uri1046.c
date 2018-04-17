#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)
    {
        r=24;
    }
    if(a>b)
    {
        r=24-a+b;
    }
    else if(a<b)
    {
        r=b-a;
    }
    printf("O JOGO DUROU %d HORA(S)\n",r);



    return 0;
}
