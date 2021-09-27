#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[])
{
int x,r,i,a,b;

printf("Digite um numero positivo para que seja feita a tabuada desse numero: ");
scanf("%i",&x);
while(x<=0){
    printf("Nao permitido. Digite um numero positivo para que seja feita a tabuada desse numero:\n ");
    scanf("%i",&x);
}

printf("Digite o primeiro intervalo dessa tabuada: ");
scanf("%i",&a);
while(a<=0){
    printf("Nao permitido. Digite o intervalo dessa tabuada:\n ");
    scanf("%i",&a);
}
printf("Digite o segundo intervalo dessa tabuada onde esse valor deve maior que %i: \n",a);
scanf("%i",&b);
while(b<=a){
    printf("Digite o segundo intervalo dessa tabuada que seja maior que  %i    \n ",a);
    scanf("%i",&b);
}
i = b;
while(a<=i){
    r = x*i;
    printf("%i x %i = %i\n",x,i, r);
    i = i-1;
}
return 0;
}
