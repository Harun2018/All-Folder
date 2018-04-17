#include<stdio.h>
int main()
{
    float a,s=0,e;
    char c;
    scanf("%f",&a);
    c='%';
    if(a>=0&&a<=400.00)
    {
        s=a+a*0.15;
        e=a*0.15;
        printf("Novo salario: %0.2f\n",s);
        printf("Reajuste ganho: %0.2f\n",e);
        printf("Em percentual: 15 %c\n",c);
    }
    else if(a>=400.01&&a<=800.00)
    {
        s=a+a*0.12;
        e=a*0.12;
        printf("Novo salario: %0.2f\n",s);
        printf("Reajuste ganho: %0.2f\n",e);
        printf("Em percentual: 12 %c\n",c);
    }
    else if(a>=800.01&&a<=1200.00)
    {
        s=a+a*0.10;
        e=a*0.10;
        printf("Novo salario: %0.2f\n",s);
        printf("Reajuste ganho: %0.2f\n",e);
        printf("Em percentual: 10 %c\n",c);
    }
    else if(a>=1200.01&&a<=2000.00)
    {
        s=a+a*0.07;
        e=a*0.07;
        printf("Novo salario: %0.2f\n",s);
        printf("Reajuste ganho: %0.2f\n",e);
        printf("Em percentual: 7 %c\n",c);
    }
    if(a>2000.00)
    {
        s=a+a*0.04;
        e=a*0.04;
        printf("Novo salario: %0.2f\n",s);
        printf("Reajuste ganho: %0.2f\n",e);
        printf("Em percentual: 4 %c\n",c);
    }


    return 0;
}
