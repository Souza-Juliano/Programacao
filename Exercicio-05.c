#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
//declarar as variaveis
float temperatura, a;
// entrada dos valores do usuario
printf("Temperatura em Celsius: ");
scanf("%f",&a);

//Operação realizada
temperatura = a + 277;

//resultado final
printf(" Temperatura em fahrenheit: %.2f F ",temperatura);


return 0;
}
