/*2) Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.*/

#include <stdio.h>
#define P1 0.2
#define P2 0.3
#define P3 0.5

void main()
{
    float nota1, nota2, nota3, media;

    printf("Primeira nota: ");
    scanf("%f", &nota1);
        if((nota1 >= 0) & (nota1 <= 10))
        {
        printf("Segunda nota: ");
        scanf("%f", &nota2);
            if((nota2 >= 0) & (nota2 <= 10)){
            printf("Terceira nota: ");
            scanf("%f", &nota3);
                if((nota3 >= 0) & (nota3 <= 10)){
                media = ((nota1 * P1) + (nota2 * P2) + (nota3 * P3));
                printf("%f", media);
                }else if(nota3 < 0){
                printf("Erro. Nota 3 abaixo de zero!");
                }else if(nota3 > 10){
                printf("Erro. Nota 3 acima de dez!");
                }
            }else if(nota2 < 0){
            printf("Erro. Nota 2 abaixo de zero!");
            }else if(nota2 > 10){
            printf("Erro. Nota 2 acima de dez!");
            }

        }else if(nota1 <0){
        printf("Erro. Nota 1 abaixo de zero!");
        }else if(nota1 > 10){
        printf("Erro. Nota 1 acima de dez!");
        }

}

