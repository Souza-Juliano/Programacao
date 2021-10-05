 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 int main (int argc, char const *argv[]){
 int num, i, r;
 r = 0;
 
 for(int num=1; num<=100; num++){
  r = num + r;
 }
printf("soma dos numeros de um a cem eh: %i",r);


return 0;
 }