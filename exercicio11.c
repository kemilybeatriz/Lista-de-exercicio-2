/*11) Tendo como dados de entrada a altura e o sexo de uma pessoa ('M' masculino e 'F' feminino),
construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: para homens:
(72,7*h)-58 e para mulheres: (62,1*h)-44,7.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float altura, pesoIdealF, pesoIdealM;
    char sexo, f, m;

    printf("Ola! Voce esta prestes a descobrir qual eh o seu peso ideal!\n\nDiga qual eh o seu sexo (f / m):\n");
    scanf("%c", &sexo);
    fflush(stdin);
        if(sexo = 'f')
        {
            printf("\nLegal! Agora diga qual eh a sua altura: ");
            scanf("%f", &altura);
            pesoIdealF = ((62.1 * altura) - 44.7);
            printf("\nProntinho! Seu peso ideal eh: %f", pesoIdealF);
        }else if(sexo = 'm')
        {
            printf("\nLegal! Agora diga qual eh a sua altura: ");
            scanf("%f", &altura);
            pesoIdealF = ((72,7 * altura) - 58);
            printf("\nProntinho! Seu peso ideal eh: %f\n", pesoIdealM);
        }


}
