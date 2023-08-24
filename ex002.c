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

    printf("\nEstamos no ano %d, então daqui 28 anos será %d.\n", anoAtual, anoFuturo);
}
