#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float salarioFixo, bonificacao, salarioTotal, porcentagemVendas = 0.10;
    int totalVendas;
    char nomeFuncionario[20];

    print("Digite o nome do funcionário:\n");
    scanf("%s", &nomeFuncionario);

    printf("Digite o salário fixo do funcionário:\n");
    scanf("%f", &salarioFixo);

    printf("Digite o total de vendas o funcionário teve:\n");
    scanf("%d", &totalVendas);

    bonificacao = salarioFixo*porcentagemVendas;
    salarioTotal = salarioFixo+bonificacao;

    printf("\nO vendedor %s teve um salário tota de: R$%.2f.\n", nomeFuncionario, salarioTotal);
}
