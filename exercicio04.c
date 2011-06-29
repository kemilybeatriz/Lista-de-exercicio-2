/*4) Escreva um programa que recebe o c�digo de um funcion�rio, o seu sal�rio e seu turno de
trabalho (M para manh� e T para tarde) e calcula o desconto dos impostos. Considere que �
descontado o INSS de 8% e o vale transporte no valor de R$ 60,00. Ao final o programa exibe �O
funcion�rio <c�digo> que trabalha durante a <turno> receber� R$<valor calculado>. �. Ex: O
funcion�rio 123 que trabalha no turno T receber� R$ 955,00.*/

#include <stdio.h>
#include <stdlib.h>

#define INSS 0.08
#define VT 60
#define numFunc 1000

void main()
{
    int codigo;
    char turno, m, t, M, T;
    float salario, resultado;

    printf("Codigo do funcionario (0001 - 1000): ");
    scanf("%d", &codigo);
        if((codigo >= 0001) && (codigo <= 1000))
        {
        printf("\nTurno que ele trabalha (m/t): ");
        fflush(stdin);
        scanf("%c", &turno);
            if(((turno = m) || (turno = t)) || ((turno = M) || (turno = T)) )
            {
            printf("\nQuanto ele recebe: ");
            scanf("%f", &salario);
                if(salario > 0)
                {
                resultado = (salario - ((salario * INSS) + VT));
                    if(resultado > 0)
                    {
                    printf("\nO funcionario %d que trabalha durante a %c recebera R$%f.", codigo, turno, resultado);
                    }else
                    {
                    printf("O funcionario %d tem um salario negativo de %f.", codigo, resultado);
                    }
                }else
                {
                printf("Erro. Salario invalido.");
                }
            }else
            {
            printf("Erro. Turno invalido!");
            }
        }else
        {
        printf("Erro. Codigo de funcionario invalido!");
        }


}
