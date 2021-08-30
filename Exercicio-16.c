#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
//Declarar variaveis
float  a,b,c,valor;
//entrada dos valores de peso e altura
printf("inserir lado 1: ");
scanf("%f",&a);
printf("inserir lado 2: ");
scanf("%f",&b);
printf("inserir lado 2: ");
scanf("%f",&c);
//calculo para saber se os valores correspondem a um triangulo
valor = a+b;
//condições se os valores correspondem a um triangulo
if(valor < c ){
    printf("Nao e um triangulo");
    return 0;   
}
else if(a==b){
    if(a==c){
        printf("Triangulo equilatero");
    }
    else{
        printf("Triangulo isosceles");
        return 0;
    }
}
else if(b==c){
    printf("triangulo isosceles");
    return 0;
}
else{
    printf("triangulo escaleno");
}
return 0;    
}
