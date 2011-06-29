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

/*Fun��o que calcula e retorna o valor da �rea.
Entrada: valor raio
Sa�da: valor da �rea
*/

float calcArea(float r)
{
    float area;

    area = (M_PI * pow(r, 2));
    return area;
}

/*Fun��o que calcula e retorna o valor do comprimento da circunferencia.
Entrada: raio
Sa�da: valor do comprimento da circunfer�ncia
*/

float calcComp(float r)
{
    float comp;

    comp = (2 * M_PI * r);
    return comp;
}
