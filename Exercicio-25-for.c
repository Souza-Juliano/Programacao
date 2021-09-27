#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[])
{
int numero, i, r;
numero = 5;

for (int i=1; i<=10; i++){
    r = numero * i;
    printf("%i x %i = %i\n",numero,i,r);
}


return 0;
}
