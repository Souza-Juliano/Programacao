 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 int main (int argc, char const *argv[]){
 int num, i, r;
 r = 0;
 num = 1;

 while(num<=100){

     r = num + r ;
     num= 1 + num;
 }
printf("soma dos numeros de um a cem eh: %i",r);
return 0;
 }