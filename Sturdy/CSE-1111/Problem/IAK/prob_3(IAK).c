///Date:08.04.2018

#include<stdio.h>
int main()
{
    int t,n[1000],i,j,k=0;
    scanf("%d",&t);

    for(i=0;i<1000;i++)
    {
        for(j=0;j<t;j++)
        {
            n[k]=j;
            k++;
        }
    }
    for(i=0;i<1000;i++)
    {
        printf("%d ",n[i]);
    }



    return 0;
}

