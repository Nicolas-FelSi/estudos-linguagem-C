#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1 = 5, numero2 = 5;
    
    if (numero1 == numero2) {
        printf("Os números são iguais");
    } else {
        printf("Os números não são iguais.");
    }
}
