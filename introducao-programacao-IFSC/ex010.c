#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float salario, salarioFinal,calculoAumento, aumento = 0.25;

    printf("Digite seu sal�rio:\n");
    scanf("%f", &salario);

    calculoAumento = salario*aumento;

    salarioFinal = salario + calculoAumento;

    printf("\nSal�rio: R$%.2f\n", salario);
    printf("Sal�rio com aumento: R$%.2f\n", salarioFinal);
}
