#include<stdio.h>
int main()
{
    char a,b,c;
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);

    if(a=='vertebrado')
    {
        if(b=='ave')
        {
            if(c=='carnivoro')
            {
                printf("aguia\n");
            }
            else if(c=='onivoro')
            {
                 printf("pomba\n");
            }
        }
        else if(b=='mamifero')
        {
            if(c=='onivoro')
            {
                printf("homem\n");
            }
            else if(c=='herbivoro')
            {
                 printf("vaca\n");
            }
        }
    }
    if(a=='invertebrado')
    {
        if(b=='inseto')
        {
            if(c=='hematogafo')
            {
                printf("pulga\n");
            }
            else if(c=='herbivoro')
            {
                 printf("lagarta\n");
            }
        }
        else if(b=='anelideo')
        {
            if(c=='hematogafo')
            {
                printf("sanguessuga\n");
            }
            else if(c=='onivoro')
            {
                 printf("minhoca\n");
            }
        }
    }








    return 0;
}
