#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int anterior1 = 1;
    int anterior2 = 0;
    int atual;

    printf("Série de Fibonacci: \n");
    printf("%d %d ", anterior2, anterior1);

    for (int i = 3; i <= 8; i++)
    {
        atual = anterior2 + anterior1;
        anterior2 = anterior1;
        anterior1 = atual;
        printf("%d ", atual);
    }
    
}
