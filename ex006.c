#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int anoNascimento, idade, anoAtual = 2023;

    printf("Qual seu ano de nascimento?\n");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("\nAno de nascimento: %d\n", anoNascimento);
    printf("Ano Atual: %d\n", anoAtual);
    printf("Sua idade: %d\n", idade);
}
