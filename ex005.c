#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int numero, dobro;

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &numero);

    dobro = numero * 2;

    printf("\nO dobro de %d �: %d, onde %d � o valor digitado pelo usu�rio e %d o valor calculado.\n", numero, dobro, numero, dobro);
}
