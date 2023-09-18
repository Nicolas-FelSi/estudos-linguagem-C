#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1 = 50, numero2 = 30;

    if (numero1 > numero2) {
        printf("O número %d é maior que o número %d.", numero1, numero2);
    } else {
        printf("O número %d é maior que o número %d.", numero2, numero1);
    }    
}