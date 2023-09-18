#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int idadeEmAnos(int anoNascimento, int anoAtual) {
    int idadeAnos = anoAtual - anoNascimento;
    return idadeAnos;
}

float idadeEmMeses(int idade) {
    float idadeMeses = idade * 12;
    return idadeMeses;
}

float idadeEmSemanas(int idade) {
    float idadeSemanas = idade * 52.179;
    return idadeSemanas;
}

float idadeEmDias(int idade) {
    float idadeDias = idade * 365.3;
    return idadeDias;
}

int main() {
    setlocale(LC_ALL, "PORTUGUESE");

    int anoNascimento, anoAtual, idadeAnos;
    float idadeMeses, idadeSemanas, idadeDias;
    
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &anoNascimento);

    printf("\nDigite o ano atual:\n");
    scanf("%d", &anoAtual);

    idadeAnos = idadeEmAnos(anoNascimento, anoAtual);
    idadeMeses = idadeEmMeses(idadeAnos);
    idadeSemanas = idadeEmSemanas(idadeAnos);
    idadeDias = idadeEmDias(idadeAnos);

    printf("\nIdade em Anos: %d anos.\n", idadeAnos);
    printf("\nIdade em Meses: %.2f meses.\n", idadeMeses);
    printf("\nIdade em Semanas: %.2f semanas.\n", idadeSemanas);
	  printf("\nIdade em Dias: %.2f dias.\n", idadeDias);
}


    
