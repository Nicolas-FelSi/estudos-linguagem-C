#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float salario, percentual, valorAumento, novoSalario;

    printf("Insira o salário: \n");
    scanf("%f", &salario);

    printf("Insira o percentual de aumento: \n");
    scanf("%f", &percentual);

    valorAumento = salario*(percentual/100);
    novoSalario = salario+valorAumento;

    printf("Valor de aumento: %.2f", valorAumento);
    printf("\nNovo salario: %.2f", novoSalario);
}
