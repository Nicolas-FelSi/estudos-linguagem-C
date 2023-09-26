#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    char letra;

    printf("Digite uma letra:\n");
    scanf("%c", &letra);

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' ||
       letra == 'U') {
        printf("A letra é VOGAL!");
    } else {
        printf("A letra é CONSOANTE!");
    }
}
