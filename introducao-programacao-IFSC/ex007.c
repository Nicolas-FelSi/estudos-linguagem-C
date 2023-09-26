#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    
    int mensagensRecebidas, mensagensLidas, mensagensNaoLidas;

    printf("Quantas mensagens o usuário recebeu?\n");
    scanf("%d", &mensagensRecebidas);
    printf("Quantas mensagens o usuário leu?\n");
    scanf("%d", &mensagensLidas);

    mensagensNaoLidas = mensagensRecebidas - mensagensLidas;

    printf("\nAinda restam %d mensagens não lidas.", mensagensNaoLidas);
}


