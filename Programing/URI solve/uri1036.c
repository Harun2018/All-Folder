#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,x,y,z;
   scanf("%f %f %f",&a,&b,&c);
   z=(b*b-4*a*c);
   if(z>=0 && a!=0)
   {
       x=(-b+sqrt(z))/(a+a);
       y=(-b-sqrt(z))/(a+a);

       printf("R1 = %0.5f\n",x);
       printf("R2 = %0.5f\n",y);
   }
   else
    printf("Impossivel calcular\n");



    return 0;
}


