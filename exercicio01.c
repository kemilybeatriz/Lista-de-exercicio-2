/*1) Construa um algoritmo que permite ao usu�rio entrar com dois valores A e B e C. Supondo que a
vari�vel A � um inteiro, a vari�vel B � um double e a vari�vel C um char, o programa dever� exibir
o resultado da seguinte forma: !(A > B != (C == B)).*/
#include <stdio.h>

void main()
{
    int A;
    double B;
    char C;
    char resultado;

    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%lf", &B);
    printf("C: ");
    scanf("%d", &C);

    resultado = ( ! (A > B) != (C == B));

    printf("O resultado eh: %d", resultado);
}
