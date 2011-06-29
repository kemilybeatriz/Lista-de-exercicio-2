#include <stdio.h>
#include <stdlib.h>

int imparPar(int inteiro);

void main()
{
    int resultado, inteiro;

    printf("Digite um numero: ");
    scanf("%d", &inteiro);

    //resultado = (!((inteiro % 2) != 0));

    printf("%d", imparPar(inteiro));
}

int imparPar(int inteiro)
{
    return (!((inteiro % 2) != 0));
}
