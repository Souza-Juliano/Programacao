#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    //Declarando variaveis 
    float a1,b1,c1,valor1,valor2;
    //entrando com os valores
    printf("digite o valor do cateto adjacente:");
    scanf("%f",&a1);
    printf("digite o valor do cateto oposto:");
    scanf("%f",&b1);
    printf("digite o valor da hibotenusa:");
    scanf("%f",&c1);
    //calculo para saber se é um retangulo ou não
    valor1 = a1+b1;
    //valor2 = c1*2;
    // condiçoes para saber se os valores correpondem ou não a um triagulo retangulo
    if(valor1 == c1*c1){
        printf("Os valores digitados correspondem a um trinagulo retangulo");
    }
    else{
        printf("Os valores digitados nao correspondem a um triagulo retangulo");
return 0;
}







}