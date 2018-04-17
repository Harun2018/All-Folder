///Date:08.04.2018

#include<stdio.h>
int main()
{
   int a,n[1000],i,j=0;

   scanf("%d",&a);

   n[0]=a;
   for(i=1;i<10;i++)
   {
       n[i]=n[j]*2;
       j++;
   }
   for(i=0;i<10;i++)
   {
       printf("%d ",n[i]);
   }



    return 0;
}

