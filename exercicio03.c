/*3) Escreva um programa que calcula a área e o comprimento de um círculo. Considere que o
usuário informa o valor do raio com casas decimais. Sugestão use o valor de PI como uma
constante. A saída deverá ser apresentada da seguinte forma:
a. Comprimento do círculo é: xx
b. Área do círculo é: xx
Obs: construa duas versões: uma com a solução do exercício dentro da função main() e outra com
mais duas funções (area() e perímetro()).*/

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
