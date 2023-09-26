#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int mes;

    printf("Digite o número do mês: \n");
    scanf("%d", &mes);

    if (mes == 1) {
        printf("\nJANEIRO.");
    } else if (mes == 2) {
        printf("\nFEVEREIRO.");
    } else if (mes == 3) {
        printf("\nMARÇO.");
    } else if (mes == 4) {
        printf("\nABRIL.");
    } else if (mes == 5) {
        printf("\nMAIO.");
    } else if (mes == 6) {
        printf("\nJUNHO.");
    } else if (mes == 7) {
        printf("\nJULHO.");
    } else if (mes == 8) {
        printf("\nAGOSTO.");
    } else if (mes == 9) {
        printf("\nSETEMBRO.");
    } else if (mes == 10) {
        printf("\nOUTUBRO.");   
    } else if (mes == 11) {
        printf("\nNOVEMBRO.");
    } else if (mes == 12) {
        printf("\nDEZEMBRO.");
    } else {
        printf("\nNúmero inválido.");
    }
}
