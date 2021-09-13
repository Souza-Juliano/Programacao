#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])

{
//Declaração de variaveis
float a,b,c,v1,v2,R,p1,p2,m;
//entrando com os valores
printf("Digite o valor da P1: ");
scanf("%f",&p1);
printf("Digite o valor da P2: ");
scanf("%f",&p2);
//calculo para determinar a media
m = (p1+(2*p2))/3;

if(m>=5){
        printf("\n Aprovado.");
        return 0;   
    }
    else{
        printf("\n Reprovado.");
        return 0;
    }
return 0;
}
