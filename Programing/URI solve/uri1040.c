#include<stdio.h>
int main()
{
    float a,b,c,d,media,s,average;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    media=((a*2)+(b*3)+(c*4)+(d*1))/10;

    printf("Media: %0.1f\n",media);
    if(media>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media<5)
    {
        printf("Aluno reprovado.\n");
    }
     else if(media>=5 && media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&s);
        printf("Nota do exame: %0.1f\n",s);



        average=(media+s)/2;
        if(average>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if(average<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media Final: %.01f\n",average);
    }


    return 0;

}

