#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int descobrirIdade(int anoNascimento)
{
    int idade = 2023-anoNascimento;
    return idade;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int idade, anoNascimento;

    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &anoNascimento);

    idade = descobrirIdade(anoNascimento);

    printf("\nVocê nasceu no ano de %d e tem %d anos.\n", anoNascimento, idade);
}