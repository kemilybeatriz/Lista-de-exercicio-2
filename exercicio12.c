/*12) Construa um programa que permite ao usuário saber qual o caracter de controle deve usar para
a função printf() pressionando o número relacionado ao tipo de dado:
1 Exibe um caractere
2 Exibe um inteiro em formato decimal
3 Exibe um inteiro
4 Exibe um número em notação científica (com e
minúsculo)
5 Exibe uma string
6 Exibe um decimal sem sinal
7 Exibe um ponteiro
8 Exibe um número em hexadecimal com letras maiúsculas*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;

    printf("Digite um numero de 1 a 8 para saber qual caractere voce devera usar\npara a funcao printf().");
    scanf("%d", &numero);
        if(numero == 1)
        {
            printf("\n%%c - Exibe um caractere.\n");
            }else if(numero == 2)
            {
                printf("\n%%d - Exibe um inteiro em formato decimal.\n");
                }else if(numero == 3)
                    {
                        printf("\n%%i - Exibe um inteiro.\n");
                        }else if(numero == 4)
                            {
                                printf("\n%%e - Exibe um numero em notacao cientifica\n (com e minusculo).\n");
                                }else if(numero == 5)
                                {
                                    printf("\n%%s - Exibe uma string.\n");
                                    }else if(numero == 6)
                                    {
                                        printf("\n%%u - Exibe um decimal sem sinal.\n");
                                        }else if(numero == 7)
                                        {
                                            printf("\n%%p - Exibe um ponteiro.\n");
                                            }else if(numero == 8)
                                            {
                                                printf("\n%%X - Exibe um numero em hexadecimal com letras maiusculas\n");
                                                }else if(numero > 8)
                                                {
                                                printf("Erro. Numero maior que 8!");
                                                    }else if(numero < 1)
                                                    {
                                                        printf("Erro. Numero menor que 1!");
                                                        }
}
