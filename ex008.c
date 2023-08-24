#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
   
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    printf("Digite a quarta nota:\n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("\nA média das notas %.1f - %.1f - %.1f - %.1f é %.1f.\n", nota1, nota2, nota3, nota4, media);
}
