#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
 //declarar variaveis 
 float a,b,c,d,e,l,troco,valor;
 //entrada dos valores dos produtos
 printf("Valor do produto 1:");
 scanf("%f",&a);
 printf("Valor do produto 2:");
 scanf("%f",&b);    
 printf("Valor do produto 3:");
 scanf("%f",&c); 
 printf("Valor do produto 4:");
 scanf("%f",&d);
 printf("Valor do produto 5:");
 scanf("%f",&e); 
//somando os valores dos produtos
valor = a+b+c+d+e;
 //resultado da soma dos valores desse produto
 printf("Valor a pagar: %.2f",valor); 
 //entrada do valor a ser depositado pelo usuario
 printf("Valor depositado pelo usuario: ");
 scanf("%f",&l);
 //operação para contabilizar o troco
 troco = l - valor;
 //exibindo o valor do troco
 printf("Troco: %.2f",troco);
 return 0;   
}
