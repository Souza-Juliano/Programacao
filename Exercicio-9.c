#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
//Declarar variaveis
float  a1,a2;
//entrada dos valores de peso e altura
printf("inserir valor 1: ");
scanf("%f",&a1);

printf("inserir valor 2: ");
scanf("%f",&a2);

//operação realizada
   if(a1>a2){
    printf("o primeiro Valor eh o maior. Valor: %.2f",a1);
    }
    else if (a2>a1) {
    printf("o segundo valor eh o maior. Valor: %.2f",a2);
    }
    else{
        printf("os valores sao identicos");
    }

return 0;
}
