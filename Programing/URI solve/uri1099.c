#include<stdio.h>
int main()
{
    int n,i,j,c=0,t,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            if(b%2==0)
            {
                t=b+1;
                for(j=t;j<a;j=j+2)
                {
                    c=c+j;
                }
            }
            else
            {
                t=b+2;
                for(j=t;j<a;j=j+2)
                {
                    c=c+j;
                }
            }

        }

        else if(a<b)
        {
            if(a%2==0)
            {
                t=a+1;
                for(j=t;j<b;j=j+2)
                {
                    c=c+j;
                }
            }
            else
            {
                t=a+2;
                for(j=t;j<b;j=j+2)
                {
                    c=c+j;
                }
            }

        }
        printf("%d\n",c);
        c=0;

    }

    return 0;
}
