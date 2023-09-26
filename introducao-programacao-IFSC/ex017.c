#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float descobrirIMC(float altura, float peso)
{
    float imc = peso/pow(altura, 2);
    return imc;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float imc;

    imc = descobrirIMC(1.80, 92);
    printf("IMC de Pedro: %.2f.\n", imc);

    imc = descobrirIMC(1.69, 70);
    printf("IMC de Márcio: %.2f.\n", imc);

    imc = descobrirIMC(1.74, 20);
    printf("IMC de Lucas: %.2f.\n", imc);
}