#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[])
{
int numero, i, r;
i = 1;
numero = 5;

while(i <= 10){
    r = numero * 1;
    printf("%i x %i = %i\n",numero,i, r);
    i = i + 1;
}



return 0;
}
