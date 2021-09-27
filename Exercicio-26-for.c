#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[])
{
int num,r,i;

printf("Digite um numero positivo: ");
scanf("%i",&num);
while(num<=0 || 11<=num){
    printf("Nao permitido. Digite um numero positivo de 0(zero) a 10(dez) :\n ");
    scanf("%i",&num);
}
i = 1;

for(int i=1; i<=10; i++){
    r = num * i;
    printf("%i x %i = %i\n",num,i,r);
}
return 0;
}
