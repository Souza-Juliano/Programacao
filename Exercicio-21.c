#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[])
{
//Declaração de variaveis
float p1,p2,m;
m=5;
//entrando com os valores
printf("Digite o valor da P1: ");
scanf("%f",&p1);
//calculo para determinar o quando voce precisa tirar pra chegar na media

if(p1==0){
   p1=1;
   p2 = ((3*m)/p1)/2;
   printf("\n O aluno precisa tirar: %f  na P2",p2);
   return 0;
}
else{
   p2 = ((3*m)/p1)/2;
   printf("O aluno precisa tirar: %f  na P2",p2);
   return 0;
}

return 0;
}
