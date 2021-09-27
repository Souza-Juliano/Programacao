#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[])
{
int num,r,i;

printf("Digite um numero positivo: ");
scanf("%i",&num);
while(num<=0 || 11<=num){
    printf("Nao permitido. Digite um numero positivo:\n ");
    scanf("%i",&num);
}

i = 1;

while(i<=10){
    r = num*i;
    printf("%i x %i = %i\n",num,i, r);
    i = i+1;
}
return 0;
}
