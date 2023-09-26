#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int A, B, resposta;

    printf("Digite dois números inteiros: \n");
    scanf("%d %d", &A, &B);

    if(A == B) {
        resposta = A+B;
        printf("\nOs valores são iguais, logo a soma é %d.\n", resposta);
    } else {
        resposta = A*B;
        printf("\nOs valores são diferentes, logo a multiplicação é %d.\n", resposta);
    }
}
