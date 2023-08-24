#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float salario, salarioFinal,calculoAumento, aumento = 0.25;

    printf("Digite seu salário:\n");
    scanf("%f", &salario);

    calculoAumento = salario*aumento;

    salarioFinal = salario + calculoAumento;

    printf("\nSalário: R$%.2f\n", salario);
    printf("Salário com aumento: R$%.2f\n", salarioFinal);
}
