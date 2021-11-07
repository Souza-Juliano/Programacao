
//32. Calcular e exibir a soma dos “N” primeiros valores da seqüência abaixo. O valor “N” será digitado, 
//deverá ser positivo, mas menor que cem. Caso o valor não satisfaça a restrição, enviar mensagem de erro 
//e solicitar o valor novamente. A seqüência: 2, 5, 10, 17, 26, ....
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
 int main (int argc, char const *argv[]){
//Declarando variaveis
     int  num, num1, r,d,f;
   
     num1=0;
     d = 1;
     r = 1;
     f = 0;
//Entrada usuario
printf("Digitar quantos elementos serao somados: (digitar valores maiores 1 e menores que 100) \n");
scanf("%i",&num1); 
// Condição para os numeros digitados pelo usuario.
    while(num1<=0 || 100<=num1){
    printf("Digite apenas valores positivos e menores do que 100.\n Digite novamente: ");
    scanf("%f", &num1);
}
//Calculo para a soma dos N elementos
for(int num=1; num<=num1; num++){
    r = r + d;
    //printf("%i\n",r);
    d = d + 2;
    f = r + f;
}
//Mostrando valor acumulado
printf("%i\n",f);
return 0;
 }