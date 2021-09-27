 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 int main (int argc, char const *argv[]){
 int num, i, r;

 for(int num=1; num<=20; num++){
 //printf("%i",num);
    for(int i=1; i<=10; i++){
    r = num * i;
    printf("%i x %i = %i\n",num,i,r);
}   
 i = 1;
 printf("\nprecione qualquer tecla para continuar tabuadas...\n");
 getch();
   }
    


 return 0;
 }
