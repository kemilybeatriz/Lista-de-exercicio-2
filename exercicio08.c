/*8) Escreva um programa que informa a área e o perímetro de um retângulo para a altura e a largura
fornecida.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float altura, largura, area, perimetro;

    printf("Altura: ");
    scanf("%f", &altura);
    printf("Largura: ");
    scanf("%f", &largura);

    area = (altura * largura);

    perimetro = ((2 * altura) + (2 * largura));

    printf("Resultado: A area do retangulo eh %f e o seu perimetro eh %f.", area, perimetro);
}
