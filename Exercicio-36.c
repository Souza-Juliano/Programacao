//36. Armazenar vinte valores na memória. Após a digitação, 
//entrar com uma constante multiplicativa que deverá multiplicar 
//cada um dos valores do vetor e armazenar o resultado em outro vetor,
//porém em posições equivalentes. Exibir os vetores na tela.
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <conio.h>

 int main(int argc, char *argv[]){
  // Declarando e populando o vetor com 5 posições
  // int numeros[5] = {7, 2, 12, 8, 5};
  // Declarando o vetor com 10 posições
  int numeros1[20],numeros2[20], r;
  //constante que irá multiplicar os vetores
   r = 2;
  // Looping para popular o vetor
  printf("Digite os 20 numeros:\n ");
  for(int i=0; i<20; i++){
  scanf("%i", &numeros1[i]);
  }
  // Looping para exibir os valores do vetor
  printf("Os numeros digitados multiplicados pela constante eh: \n ");
  for(int i=0; i<20; i++){
  numeros2[i] = r * numeros1[i]; 
  //passsando o valor um vetor para o outro
  // mostrando o conteudo do vetor numeros2
  printf("Vetor 1 :    %i  e vetor 2: %i \n",numeros1[i],numeros2[i]);
  }
  return 0;
  }