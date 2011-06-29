#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float calcArea(float r);
float calcComp(float r);
void main()
{
    float raio;

    printf("Valor do raio: ");
    scanf("%f", &raio);

    printf("\nArea: %f\n", calcArea(raio));
    printf("\nComprimento: %f\n", calcComp(raio));
}

/*Função que calcula e retorna o valor da área.
Entrada: valor raio
Saída: valor da área
*/

float calcArea(float r)
{
    float area;

    area = (M_PI * pow(r, 2));
    return area;
}

/*Função que calcula e retorna o valor do comprimento da circunferencia.
Entrada: raio
Saída: valor do comprimento da circunferência
*/

float calcComp(float r)
{
    float comp;

    comp = (2 * M_PI * r);
    return comp;
}
