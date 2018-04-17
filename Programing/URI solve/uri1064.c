#include<stdio.h>
int main()
{
    float a[6],b[6],d=0,avg;
    int i,c=0,j=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            b[j]=a[i];
            c++;
            j++;
        }
    }
    printf("%d valores positivos\n",c);
    for(j=0;j<c;j++)
    {
        d=d+b[j];
    }
    avg=d/c;
    printf("%0.1f\n",avg);


    return 0;
}

