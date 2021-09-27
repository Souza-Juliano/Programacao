#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char const *argv[])
{
//Declarando variaveis 
char sexo;
//entrando com os valores do usuario
printf("Digite o sexo: (M/F)  ");
scanf("%s",&sexo);
//printf("voce digitou %c",sexo);
while (sexo != 'F' && sexo != 'M'){   
printf("Nao identificado. \nDigite apenas F para feminino ou M para masculino.  ");
scanf("%s",&sexo);
}
printf("Obrigado!");
    return 0;  

}
