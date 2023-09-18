#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcularSalarioTotal(float salarioFixo, float totalDeVendas){
	float calculoComissao = 0.040*totalDeVendas;
    float salarioTotal = salarioFixo+calculoComissao;
    return salarioTotal;
}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
    
    float salarioFixo, totalDeVendas, salarioFinal;
    
    printf("Digite o salário fixo do funcionário:\n");
    scanf("%f", &salarioFixo);
    
    printf("\nDigite o total de vendas feitas pelo funcionário:\n");
    scanf("%f", &totalDeVendas);
    
    salarioFinal = calcularSalarioTotal(salarioFixo, totalDeVendas);
    
    printf("\nSalário fixo: R$%.2f.\n", salarioFixo);
    printf("Salário com comissão: R$%.2f.\n", salarioFinal);
}


