/*14) Crie um programa que permite ao usu�rio entrar com o valor da seguinte express�o: int num =
4%2*1-44/10+1. O programa dever� exibir �certo�, caso o usu�rio tenha acertado o resultado ou
�errado� em caso contr�rio.*/

#include <stdio.h>


void main()
{
    int num, resultado;
    printf("Qual o resultado de ((4%2) * (1-44/10+1)) ?\nResposta: ");
    scanf("%d", &num);
    resultado = ((4%2) * (1-44/10+1));
        if(num == resultado)
        {
            printf("\nParabens! A resposta esta correta!\n");
        }else if(num != resultado)
        {
            printf("\nAh, nao foi dessa vez! Sua resposta esta incorreta!\n");
        }
}
