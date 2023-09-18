#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificaNumeroMaior(int numero1, int numero2){
    if (numero1 > numero2) {
        printf("O número %d é maior que o número %d.", numero1, numero2);
    } else {
        printf("O número %d é maior que o número %d.", numero2, numero1);
    }
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1, numero2;

    printf("Digite dois n�meros inteiros para ver qual o maior\n");
    scanf("%d %d", &numero1, &numero2);

    verificaNumeroMaior(numero1, numero2);
}