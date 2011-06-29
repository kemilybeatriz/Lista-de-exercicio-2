/*7) Escreva um programa que recebe o primeiro nome de um aluno, o seu registro acadêmico, o
nome simples de uma matéria e três notas dessa matéria. No final o programa informa a seguinte
mensagem: “O Aluno <nome do aluno> teve nota <nota1>, <nota2> e <nota3> na matéria <nome
da matéria> e sua nota final é: <média das notas>”*/

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
