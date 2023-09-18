#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificaNumerosIguais(int numero1, int numero2){
    if (numero1 == numero2) {
        printf("Os nï¿½meros sï¿½o iguais");
    } else {
        printf("Os nï¿½meros nï¿½o sï¿½o iguais.");
    }
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1, numero2;

    printf("Digite dois nÃºmeros inteiros para verificar se são iguais.\n");
    scanf("%d %d", &numero1, &numero2);

    verificaNumerosIguais(numero1, numero2);
}    
