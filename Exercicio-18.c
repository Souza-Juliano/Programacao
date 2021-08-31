#include <stdio.h>
#include <stdlib.h>
//#include <string.h>


int main (int argc, char const *argv[])
{
//Declarando variaveis 
float a1,b1,R;
char sexo;
//entrando com os valores e nomes
printf("digite seu peso:  ");
scanf("%f",&a1);
printf("digite o a sua altura:  ");
scanf("%f",&b1);
printf("Digite o sexo: (M/F)  ");
scanf("%s",&sexo);
//printf("voce digitou %c",sexo);
//calculo para saber se a pessoa esta ou não no peso ideal
R = a1/(b1*b1);
//condição inicial se masculino ou feminino
if(sexo ='M'){
    if(R<20){
        printf("\n Abaixo do peso.");
        return 0;   
    }
    else if(R<25||R<=20){
        printf("\n Seu peso eh o ideal.");
        return 0;
    }
    else{
        printf("\n Acima do peso.");
        return 0;
    }
 }
if(sexo = 'F'){
    if(R<19){
        printf("\n Abaixo do peso.");
        return 0;   
    }
    else if(R<24||R<=19){
        printf("\n Seu peso eh o ideal.");
        return 0;
    }
    else{
        printf("\n Acima do peso.");
        return 0;
    }    
}
   return 0;
}
