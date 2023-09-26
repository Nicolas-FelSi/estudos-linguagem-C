#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade > 0 && idade < 16) {
        printf("\nNão eleitor.");
    } else if (idade >= 18 && idade <= 65) {
        printf("\nEleitor obrigatório.");
    } else if (idade == 16 || idade == 17 || idade > 65) {
        printf("\nEleitor facultativo.");
    } else {
        printf("Digite uma idade válida.");
    }
}
