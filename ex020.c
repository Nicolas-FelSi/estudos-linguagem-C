#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1 = 50, numero2 = 30;

    if (numero1 > numero2) {
        printf("O n�mero %d � maior que o n�mero %d.", numero1, numero2);
    } else {
        printf("O n�mero %d � maior que o n�mero %d.", numero2, numero1);
    }    
}
