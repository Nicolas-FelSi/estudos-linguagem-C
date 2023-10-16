#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int total=0;

    for (int i = 1; i < 11; i++)
    {
        total += i;
    }
    

    printf("Somatório: %d", total);
}
