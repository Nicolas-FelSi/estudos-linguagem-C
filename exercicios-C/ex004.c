#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int escolha;
    float numero1, numero2, resultado;

    printf("Digite 1 para somar;\n");
    printf("Digite 2 para subtrair;\n");
    printf("Digite 3 para multiplicar;\n");
    printf("Digite 4 para dividir;\n");
    scanf("%d", &escolha);

    if (escolha > 0 && escolha < 5)
    {
        printf("Insira o primeiro valor: \n");
        scanf("%f", &numero1);

        printf("Insira o segundo valor: \n");
        scanf("%f", &numero2);

        switch (escolha)
        {
        case 1:
            resultado = numero1 + numero2;
            printf("Soma: %.2f", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Subtração: %.2f", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("Multiplicação: %.2f", resultado);
            break;
        case 4:
            if (numero1 == 0 || numero2 == 0)
            {
                printf("Divisão por Zero.");
            }
            else
            {
                resultado = numero1 / numero2;
                printf("Divisão: %.2f", resultado);
            }   
            break;
        }
    }
    else
    {
        printf("\nOpção inválida.");
    }
}