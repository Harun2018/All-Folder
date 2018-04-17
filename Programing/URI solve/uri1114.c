#include<stdio.h>
int main()
{
    int n=2002,i,a;
    for(i=1;i;i++)
    {
        scanf("%d",&a);
        if(n==a)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }


    return 0;
}
