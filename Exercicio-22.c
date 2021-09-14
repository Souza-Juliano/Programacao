#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
//Declarar variaveis
float  a,b,c,valor,num;
//Solicitar valor do usuario
printf("Digite um numero: ");
scanf("%f",&num);
while(num<=0){
    printf("Digite apenas valores positivos.\n Digite novamente: ");
    scanf("%f", &num);
}
printf("Obrigado!");
    return 0;   
}
