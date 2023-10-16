#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int segundos, horas, minutos;

    printf("Insira tempo em segundos: \n");
    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos = segundos - (3600*horas);

    minutos = segundos/60;
    segundos = segundos - (60*minutos);

    printf("Horas: %d", horas);
    printf("\nMinutos: %d", minutos);
    printf("\nSegundos: %d", segundos);
}
