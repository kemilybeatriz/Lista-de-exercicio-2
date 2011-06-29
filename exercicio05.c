#include <stdio.h>
#include <stdlib.h>

#define INSS 0.08
#define VT 60

float calcSalario(float salario);

void main()
{
    int codigo;
    char turno, m, M, t, T;
    float salario;

    printf("Codigo do funcionario (0001 - 1000): ");
    scanf("%d", &codigo);
        if((codigo >= 0001) && (codigo <= 1000))
        {
        printf("\nTurno que ele trabalha (m/t): ");
        fflush(stdin);
        scanf("%c", &turno);
            if(((turno == 'm')||(turno == 't'))||((turno == 'M')||(turno == 'T')))
            {
            printf("\nQuanto ele recebe: ");
            scanf("%f", &salario);
                if(salario > 0)
                {
                //resultado = (salario - ((salario * INSS) + VT));
                calcSalario(salario);
                    if(calcSalario(salario) > 0)
                    {
                    printf("\nO funcionario %d que trabalha durante a %c recebera R$%f.", codigo, turno, calcSalario(salario));
                    }else
                    {
                        printf("\nO funcionario %d que trabalha durante a %c recebera um salario negativo de R$%f.", codigo, turno, calcSalario(salario));
                    }
                }else
                {
                printf("Erro. Salario invalido!");
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

/*Função que recebe o valor do salário e retorna o mesmo com os descontos do INSS e dos Vales Transportes;
Entrada: Salário
Saída: Salário com os respectivos descontos de INSS e VT;
*/

float calcSalario(float renda)
{
    //float resultado;

     return (renda - ((renda * INSS) + VT));
}
