#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float mediaAritmetica(float numero1, float numero2) 
{
    float media = (numero1+numero2)/2;
    return media;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float numero1, numero2, media;

    printf("Digite o primeiro n�mero:\n");
    scanf("%f", &numero1);

    printf("Digite o segundo n�mero:\n");
    scanf("%f", &numero2);

    media = mediaAritmetica(numero1, numero2);

    printf("\nA m�dia entre %.1f e %.1f �: %.1f.\n", numero1, numero2, media);
}
