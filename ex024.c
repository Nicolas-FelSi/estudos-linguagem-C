#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sucessorNumero(int numero){
    int sucessorNumero;
    if (numero >= 0 && numero <= 60) {
        if (numero == 60){
            sucessorNumero = 0;
            printf("\nSucessor de %d é %d.", numero, sucessorNumero);
        } else {
            sucessorNumero = numero + 1;
            printf("\nSucessor de %d é %d.", numero, sucessorNumero);
        }
    } else {
        printf("Digite um número inteiro entre 0 e 60.");
    } 
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero;

    printf("Digite um número inteiro entre 0 e 60.\n");
    scanf("%d", &numero);

    sucessorNumero(numero);
}