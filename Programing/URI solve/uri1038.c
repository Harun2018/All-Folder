#include<stdio.h>
int main()
{
    int x,y;
    double p,r;
    scanf("%d %d",&x,&y);

    if(x==1)
    {
        p=4.00;
    }
    else if(x==2)
    {
        p=4.50;
    }
     else if(x==3)
    {
        p=5.00;

    }
     else if(x==4)
    {
        p=2.00;
    }

     else if(x==5)
    {
        p=1.50;
    }

    r=p*y;
    printf("Total: R$ %0.2lf\n",r);


    return 0;

}
