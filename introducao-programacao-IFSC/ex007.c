#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    
    int mensagensRecebidas, mensagensLidas, mensagensNaoLidas;

    printf("Quantas mensagens o usu�rio recebeu?\n");
    scanf("%d", &mensagensRecebidas);
    printf("Quantas mensagens o usu�rio leu?\n");
    scanf("%d", &mensagensLidas);

    mensagensNaoLidas = mensagensRecebidas - mensagensLidas;

    printf("\nAinda restam %d mensagens n�o lidas.", mensagensNaoLidas);
}


