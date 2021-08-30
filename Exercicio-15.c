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

if(IMC <20){
    printf("abaixo do peso");
}
else if(IMC <25){
    printf("Peso ideal");
}
else{
    printf("acima do peso");
}
printf("\nIMC eh de:%.2f",IMC);

return 0;    
}
