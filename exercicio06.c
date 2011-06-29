#include <stdio.h>
#include <stdlib.h>

void main()
{
    int codigo;
    int VT = 65;
    char turno;
    float salario, desconto, descontado;
    float INSS = 0.15;

    printf("Codigo: ");
    scanf("%d", &codigo);

    printf("Turno (m/t): ");
    fflush(stdin);
    scanf("%c", &turno);

    printf("Salario: R$");
    scanf("%f", &salario);

    desconto = ((INSS * salario) + VT);
    printf("Desconto: R$%f\n", desconto);

    descontado = (salario - desconto);
    printf("Valor a receber: R$%f", descontado);
}
