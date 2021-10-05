 
 //30. Exibir os trinta primeiros valores da série de Fibonacci. A série: 1, 1, 2, 3, 5, 8, ..
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 int main (int argc, char const *argv[]){
     int a, b, c, num, num1, num2;
     a = 1;
     b = 1;
     
for(int num=1; num<=30; num++){
     c = a + b;
     printf("%i\n",a);
     a = b;
     b = c;
}

return 0;
 }