//31. Exibir os vinte primeiros valores da série de Bergamaschi. A série: 1, 1, 1, 3, 5, 9, 17, ...
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 int main (int argc, char const *argv[]){
     int a, b, c, num, num1, num2,d;
     a = 1;
     b = 1;
     c = 1;
     
for(int num=1; num<=20; num++){
     d = a + b + c;
     printf("%i\n",a);
     a = b;
     b = c;
     c = d;
}

return 0;
 }