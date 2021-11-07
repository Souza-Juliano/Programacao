//35. Armazenar vinte valores em um vetor. Após a digitação, entrar com uma constante multiplicativa que deverá
// multiplicar cada um dos valores do vetor e armazenar o resultado no próprio vetor, na respectiva posição.
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>

 int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 5 posições
  // int numeros[5] = {7, 2, 12, 8, 5};
  // Declarando o vetor com 10 posições
  int numeros[20], r;
  //constante que irá multiplicar os vetores
   r = 2;
  // Looping para popular o vetor
  printf("Digite os 20 numeros:\n ");
  for(int i=0; i<20; i++){
  scanf("%i", &numeros[i]);
  }
  // Looping para exibir os valores do vetor
  printf("Os numeros digitados multiplicados pela constante eh: \n ");
  for(int i=0; i<20; i++){
  numeros[i] = r * numeros[i];    
  printf("%i \n", numeros[i]);
  }
  return 0;
  }