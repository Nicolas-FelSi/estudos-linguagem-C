#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    
    float precoProduto, valorDesconto, precoFinal, desconto = 0.30;

    printf("Digite o preço do produto:\n");
    scanf("%f", &precoProduto);
    
    valorDesconto = precoProduto*desconto;        
    
    precoFinal = precoProduto - valorDesconto;

    printf("\nPreço do produto: R$%.2f.\n", precoProduto);
    printf("Valor de desconto: R$%.2f.\n", valorDesconto);
    printf("Preço final do produto: R$%.2f.\n", precoFinal);
}




