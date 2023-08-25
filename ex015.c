#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float conversaoMedida(float valor)
{
    float resultado = valor/100;
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float valorConvertido;

    valorConvertido = conversaoMedida(1299);
    printf("1299cm = %.2fm\n", valorConvertido);

    valorConvertido = conversaoMedida(290);
    printf("290cm = %.2fm\n", valorConvertido);

    valorConvertido = conversaoMedida(25);
    printf("25cm = %.2fm\n", valorConvertido);
}