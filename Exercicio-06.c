#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
//variaveis declarada
float valor,a,b;
//entrada dos valores do usuario
printf("inserir valor da cotacao do dolar: ");
scanf("%f",&a);

printf("inserir quantia em dolares: ");
scanf("%f",&b);

//operação realizada
valor = a*b;

//resultado final
printf("Quatia em reais:  %.2f reais",valor );




return 0;    
}
