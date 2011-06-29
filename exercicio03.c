/*3) Escreva um programa que calcula a �rea e o comprimento de um c�rculo. Considere que o
usu�rio informa o valor do raio com casas decimais. Sugest�o use o valor de PI como uma
constante. A sa�da dever� ser apresentada da seguinte forma:
a. Comprimento do c�rculo �: xx
b. �rea do c�rculo �: xx
Obs: construa duas vers�es: uma com a solu��o do exerc�cio dentro da fun��o main() e outra com
mais duas fun��es (area() e per�metro()).*/

#include <stdio.h>
#include <math.h>

void main()
{
    float raio, area, comprimento;

    printf("Valor do raio: ");
    scanf("%f", &raio);
        if(raio >= 0){
        area = (M_PI * raio * raio);
        comprimento = (2 * M_PI * raio);

        printf("\nArea: %f", area);
        printf("\n\nComprimento: %f\n", comprimento);
        }else{
        printf("Erro. Valor do raio invalido!");
        }


}
