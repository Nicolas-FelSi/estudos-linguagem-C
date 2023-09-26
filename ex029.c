#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float numero1, numero2, resultado;
    char opcao;

    printf("Digite a operação, exemplo: 2+2.\n");
    scanf("%f %c %f", &numero1, &opcao, &numero2);

    if (opcao == '-') {
        resultado = numero1-numero2;
    } else if (opcao == '+') {
        resultado = numero1+numero2;
    } else if (opcao == '*') {
        resultado = numero1*numero2;
    } else if (opcao == '/' && numero2 != 0) {
        resultado = numero1/numero2;
    } else {
        printf("\nNúmero inválido.");
    }

    printf("\nResultado da operação: %.1f.\n", resultado);
}