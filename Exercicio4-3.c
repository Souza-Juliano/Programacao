#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //declarando variaveis
    float a,b,resultado;

    //solitar a entrada de valores do usuario, entrada do valor da base do triângulo
    printf("Digite o valor da base do triangulo: ");
    scanf("%f",&a);

    //solicitar a entrada de valores do usuario, entrada do valor da altura do triângulo
    printf("Digite o valor da base do trinagulo: ");
    scanf("%f",&b);

    //realizar a operação necessaria
    resultado = (a*b)/2;

    //resultado final
    printf("O valor da area do trinagulo e: %f",resultado);



    return 0;
}
