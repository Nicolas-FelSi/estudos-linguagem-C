#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificaNumerosIguais(int numero1, int numero2){
    if (numero1 == numero2) {
        printf("Os n�meros s�o iguais");
    } else {
        printf("Os n�meros n�o s�o iguais.");
    }
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1, numero2;

    printf("Digite dois números inteiros para verificar se s�o iguais.\n");
    scanf("%d %d", &numero1, &numero2);

    verificaNumerosIguais(numero1, numero2);
}    
