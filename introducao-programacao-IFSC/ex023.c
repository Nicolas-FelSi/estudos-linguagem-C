#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificaNumeroPar(int numero){
    if (numero % 2 == 0){
        printf("O número %d é par.", numero);
    } else {
        printf("O número %d é ímpar.", numero);
    }
    
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero;

    printf("Digite um número inteiro.\n");
    scanf("%d", &numero);

    verificaNumeroPar(numero);
}