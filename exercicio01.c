/*1) Construa um algoritmo que permite ao usuário entrar com dois valores A e B e C. Supondo que a
variável A é um inteiro, a variável B é um double e a variável C um char, o programa deverá exibir
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
