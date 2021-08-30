#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Declarar variaveis 
    int contagem;
    float soma, valor;
    soma = 0;
    valor= 0; 
    contagem = 1 ;
    //
    while(contagem<=4)
    {
    //solicitar a entrada das variaveis de entrada do usuario, entrada dos valores    
    printf("Digite os valores : " );
    scanf("%f", &valor);
    soma = soma + valor;
    contagem = contagem + 1; 
    }
    printf("A media dos valores e:%.2f",soma/4);

    return 0;
}
