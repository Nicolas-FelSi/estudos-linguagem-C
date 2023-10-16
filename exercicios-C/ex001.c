#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero1, numero2, numero3, numero4, total;

    printf("Informe quatro números, em sequência: \n");
    scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4);

    total = numero1+numero2+numero3+numero4;

    printf("Resultado da soma: %d", total);
}
