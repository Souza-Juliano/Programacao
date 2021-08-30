#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
//Declarando as variaveis 
float a1,a2,a3;
//entrando com os valores 
printf("Digite o primeiro valor:");
scanf("%f",&a1);
printf("Digite o segundo valor:");
scanf("%f",&a2);
printf("Digite o primeiro valor:");
scanf("%f",&a3);
//condições 
if(a1>a2){
    if(a1>a3){
        printf("A1 eh o maior valor.\n valor de A1: %2.f",a1);
    }
    return 0;
}
else if(a2>a3){
    printf("A2 eh o maior valor.\n valor de A2: %2.f",a2);
}
else{
    printf("A3 eh o maior valor. \nvalor de A3: %2.f",a3); 
}
return 0;
}
    
