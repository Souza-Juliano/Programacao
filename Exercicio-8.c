#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
//Declarar variaveis
float  a,b,IMC;
//entrada dos valores de peso e altura
printf("inserir peso: ");
scanf("%f",&a);

printf("inserir altura: ");
scanf("%f",&b);
//operação realizada
IMC = a/(b*b);

printf("IMC eh de:%.2f",IMC);
return 0;    
}
