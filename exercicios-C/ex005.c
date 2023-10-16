#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float trabalLab, avaliaSemest, exameFinal, media;

    printf("Insira a nota do trabalho: \n");
    scanf("%f", &trabalLab);

    printf("Insira a nota da avaliação: \n");
    scanf("%f", &avaliaSemest);

    printf("Insira a nota do exame: \n");
    scanf("%f", &exameFinal);

    media = (trabalLab*2 + avaliaSemest*3 + exameFinal*5)/10;

    if (media >= 8 && media <= 10)
    {
        printf("\nMédia: %.1f", media);
        printf("\nNota A");
    }
    else if (media >= 7 && media < 8)
    {
        printf("\nMédia: %.1f", media);
        printf("\nNota B");
    }
    else if (media >= 6 && media < 7)
    {
        printf("\nMédia: %.1f", media);
        printf("\nNota C");
    }
    else if (media >= 5 && media < 6)
    {
        printf("\nMédia: %.1f", media);
        printf("\nNota D");
    }
    else if (media >= 0 && media < 5)
    {
        printf("\nMédia: %.1f", media);
        printf("\nNota E");
    }
    else
    {
        printf("Digite novamente as notas, de 0 a 10");
    }
    
}