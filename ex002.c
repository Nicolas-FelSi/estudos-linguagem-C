#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int anoAtual, anoFuturo;

    printf("Digite o ano atual:\n");
    scanf("%d", &anoAtual);

    anoFuturo = anoAtual + 28;

    printf("\nEstamos no ano %d, ent�o daqui 28 anos ser� %d.\n", anoAtual, anoFuturo);
}
