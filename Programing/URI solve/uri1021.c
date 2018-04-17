#include<stdio.h>
int main()
{
    float n;
    int r;
    scanf("%f",&n);

    printf("NOTAS:\n");
    r=n/100;
    n=n-r*100;
    printf("%d nota(s) de R$ 100.00\n",r);
    r=n/50;
    n=n-r*50;
    printf("%d nota(s) de R$ 50.00\n",r);
    r=n/20;
    n=n-r*20;
    printf("%d nota(s) de R$ 20.00\n",r);
    r=n/10;
    n=n-r*10;
    printf("%d nota(s) de R$ 10.00\n",r);
    r=n/5;
    n=n-r*5;
    printf("%d nota(s) de R$ 5.00\n",r);
    r=n/2;
    n=n-r*2;
    printf("%d nota(s) de R$ 2.00\n",r);

    printf("MOEDAS:\n");
    r=n/1;
    n=n-r*1;
    printf("%d moeda(s) de R$ 1.00\n",r);
    r=n/0.5;
    n=n-r*0.5;
    printf("%d moeda(s) de R$ 0.50\n",r);
    r=n/0.25;
    n=n-r*0.25;
    printf("%d moeda(s) de R$ 0.25\n",r);
    r=n/0.10;
    n=n-r*0.10;
    printf("%d moeda(s) de R$ 0.10\n",r);
    r=n/0.05;
    n=n-r*0.05;
    printf("%d moeda(s) de R$ 0.05\n",r);
    r=n/0.01;
    printf("%d moeda(s) de R$ 0.01\n",r);





    return 0;
}
