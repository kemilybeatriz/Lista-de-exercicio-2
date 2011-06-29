/*15) Escreva um algoritmo que dado um número inteiro na faixa de 0 a 255 informa o caracter ASCII
correspondente.*/

#include <stdio.h>

void main()
{
    int numero;

    printf("Numero inteiro (0 - 255): ");
    scanf("%i", &numero);
        if((numero >= 0)&&(numero <= 255))
        {
            printf("O caractere relacionado ao numero inteiro %i eh: %c", numero, numero);
        }else if(numero < 0)
        {
            printf("Erro. Numero abaixo de zero!");
        }else if(numero > 255)
        {
            printf("Erro. Numero acima de 255!");
        }
}
