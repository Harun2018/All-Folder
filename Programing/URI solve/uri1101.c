#include<stdio.h>
int main()
{
    int m,n,i,j,s=0;
    for(i=1;n>0&& m>0;i++)
    {
        scanf("%d %d",&m,&n);
        if(m>n)
        {
           for(j=1;n<=m;j++)
           {
                printf("%d ",n);
                s=s+n;
                n++;
           }
          printf("Sum=%d\n",s);
          j=0;
          s=0;
        }
    }




    return 0;
}
