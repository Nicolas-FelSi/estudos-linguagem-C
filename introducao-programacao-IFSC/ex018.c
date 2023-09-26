#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float contaRestaurante(float valorTotal)
{
    float calculoTaxa = valorTotal*0.10;
    float valorFinal = valorTotal+calculoTaxa;
    return valorFinal;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float valorTotal, valorFinal;

    printf("Digite o valor total da conta:\n");
    scanf("%f", &valorTotal);

    valorFinal = contaRestaurante(valorTotal);

    printf("Valor Total: R$%.2f.\n", valorTotal);
    printf("Valor total + taxa: R$%.2f.\n", valorFinal);
}