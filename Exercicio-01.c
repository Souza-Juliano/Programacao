#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Declarando as variaveis 
    int a,b,resultado;
    //solicita a entrada de dados para o usuário, entrada do valor da base
    printf ("Digite o valor da base do retangulo:  ");
    scanf("%i", &a);

    //solicitar a entrada de dados para o usuário, entrada do valor da altura
    printf ("Digite o valor da altura do retangulo: ");
    scanf("%i", &b);

    //Faz a multiplicação dos valores obtidos acima
    resultado = a * b;

    //exibir resultado final
    printf("O valor da area do retangulo e: %i ",resultado);


    return 0;
}
