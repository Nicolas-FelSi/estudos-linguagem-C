#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int numero, dobro;

    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);

    dobro = numero * 2;

    printf("\nO dobro de %d é: %d, onde %d é o valor digitado pelo usuário e %d o valor calculado.\n", numero, dobro, numero, dobro);
}
