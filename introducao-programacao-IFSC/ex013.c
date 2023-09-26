#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int triploDoNumero(int numero)
{
    int triplo = numero*3;
    return triplo;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int numero, triplo;

    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);

    triplo = triploDoNumero(numero);

    printf("\nO triplo de %d é: %d.\n", numero, triplo);
}
