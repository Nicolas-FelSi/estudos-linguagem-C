#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int numero1, numero2, numero3, resultado;

    printf("Digite o primeiro n�mero inteiro:\n");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero inteiro:\n");
    scanf("%d", &numero2);

    printf("Digite o terceiro n�mero inteiro:\n");
    scanf("%d", &numero3);

    resultado = numero1 * numero2 * numero3;

    printf("\nA multiplica��o entre os n�meros %dx%dx%d �: %d.\n", numero1, numero2, numero3, resultado);
}