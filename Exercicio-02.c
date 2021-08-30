#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Declarando as variaveis
    int a,resultado;
    
    //solicita a entrada de dados para o usuario, entrada do valor da aresta do quadrado 
    printf("Digite o valor da aresta(lado) do quadrado: ");
    scanf("%i", &a);

    //faz a multiplicação dos valores
    resultado = a * a;
    

    //resultado final
    printf("O valor da area do quadrado e: %i",resultado);


    return 0;
}
