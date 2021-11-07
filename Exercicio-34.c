//34. Armazenar dez valores na memória do computador. 
//Após a digitação dos valores, criar uma rotina para 
//ler os valores e achar e exibir o maior deles.
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>
int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 5 posições
  // int numeros[5] = {7, 2, 12, 8, 5};
  // Declarando o vetor com 10 posições
  int numeros[10], r;
  r = 0;
  // Looping para popular o vetor
  printf("Digite os 10 numeros:\n ");
  for(int i=0; i<10; i++){
  scanf("%i", &numeros[i]);
  }
   // Looping para exibir os valores do vetor
   // printf("Os numeros digitados: \n ");
      for(int i=0; i<10; i++){
      printf("%i \n", numeros[i]);

      if ( numeros[i] >= r){
          r = numeros[i];
      }
  }
printf("O maior numero dentre os digitados eh:%i \n ",r);
  return 0;
}
