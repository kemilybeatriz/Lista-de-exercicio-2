/*7) Escreva um programa que recebe o primeiro nome de um aluno, o seu registro acad�mico, o
nome simples de uma mat�ria e tr�s notas dessa mat�ria. No final o programa informa a seguinte
mensagem: �O Aluno <nome do aluno> teve nota <nota1>, <nota2> e <nota3> na mat�ria <nome
da mat�ria> e sua nota final �: <m�dia das notas>�*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome, materia;
    int registro;
    float nota1, nota2, nota3, media;

    printf("Primeiro nome do aluno: ");
    scanf("%c", &nome);

    printf("Registro Academico: ");
    fflush(stdin);
    scanf("%d", &registro);

    printf("Materia: ");
    fflush(stdin);
    scanf("%c", &materia);

    printf("Digite a primeira, segunda e terceira nota separadas por virgula respectivamente: ");
    fflush(stdin);
    scanf("%f, %f, %f.", &nota1, &nota2, &nota3);

    media = ((nota1 + nota2 + nota3) / 3);

    printf("O Aluno %c teve nota %f, %f e %f na materia %c e sua nota final e: %f", nome, nota1, nota2, nota3, materia, media);

}
