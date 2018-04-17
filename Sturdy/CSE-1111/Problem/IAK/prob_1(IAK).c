/*change the 1st element by the
 last element and the 2nd by the
 last to second.upto 10 th to 11 */

#include<stdio.h>
int main()
{
    int n[20],x[20],i,j=0;

    for(i=0;i<20;i++)
    {
        scanf("%d",&n[i]);
    }

    for(i=19;i>10;i--)
    {
        x[j]=n[i];
        n[j]=x[j];
        j++;
    }
    for(i=0;i<20;i++)
    {
        printf("%d ",n[i]);
    }




    return 0;
}
