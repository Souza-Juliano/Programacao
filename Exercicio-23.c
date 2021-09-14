#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])

{
//Declaração de variaveis
float a,b;
//entrando com os valores
printf("Digite o primeiro numero: ");
scanf("%f",&a);
printf("Digite o segundo valor: ");
scanf("%f",&b);

while(b>=a  ){
     printf("valor do primeiro eh menor que o valor do segundo. \n Digite novamente o valor do segundo numero. ");
     scanf("%f",&b);
}
printf("Obrigado!");
return 0;
}
