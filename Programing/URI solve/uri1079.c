#include<stdio.h>
int main()
{
    int n,i,j,m,b=0;
    float a[100][100];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&a[i][j]);
        }

    }
    m=2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            m=m+j;
            b=b+a[i][j]*m;
        }
        printf("%0.1f\n",b/10.0);
        b=0;
    }



    return 0;
}


