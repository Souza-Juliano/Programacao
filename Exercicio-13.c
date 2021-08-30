#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Declarando as variaveis 
    float b1,b2,area;
    //solicita a entrada de dados para o usuário, entrada do valor da base
    printf ("Digite o valor da base do terreno:  ");
    scanf("%f", &b1);

    //solicitar a entrada de dados para o usuário, entrada do valor da altura
    printf ("Digite o valor da altura do terreno: ");
    scanf("%f", &b2);

    //Faz a multiplicação dos valores obtidos acima
    area = b1 * b2;

    //Condição se maior ou menor que um valor estipulado 
    if(area > 100){
        printf("Terreno Grande!");
        }
    else{
        printf("Terreno Pequeno");
    }
    printf("\nA area do terreno eh de:%.2f ",area);

    return 0;
}

