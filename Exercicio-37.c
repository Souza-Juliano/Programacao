//37. Armazenar um máximo de 20 valores em um vetor. 
//A quantidade de valores a serem armazenados será escolhida pelo usuário. 
//Enviar mensagem de erro, caso a quantidade de valores escolhida 
//esteja fora da faixa possível e solicitar a quantidade novamente. 
//Após a digitação dos valores, criar uma rotina de consulta, onde 
//o usuário digita um número e o programa exibe em qual posição 
//do vetor este número está localizado. Se o número não for encontrado,
//enviar mensagem “Valor não encontrado!”. Perguntar ao usuário 
//se deseja ou não fazer uma nova consulta, consistir a resposta
// e encerrar o programa em caso negativo.

#include <stdio.h>
 
int main(int argc, char *argv[]){
  int *numeros;
  int qtd,p,escolha;
  p = 0;
  qtd = 0;
 
  printf("Digite a quantidade de numeros: ");
  scanf("%i", &qtd);

   while(qtd<=0 || 20<=qtd){
   printf("Digite apenas valores positivos e menores do que 20.\n Digite novamente: ");
   scanf("%i", &qtd);
}
 
  // O malloc reserva 100 blocos na memória e o ponteiro "numeros" aponta pra lá
  numeros = (int*)malloc(qtd*sizeof(int));
 
  printf("Digite os numeros: ");
  for(int i=1; i<qtd; i++){
      scanf("%i\n", &numeros[i]);
  }
 
  //printf("Os numeros digitados foram: ");
  //for(int i=0; i<qtd; i++){
  // printf("%i \n", numeros[i]);
  //}
  printf("Digite um dos numeros para localizar a posição dele no vetor ");
  scanf("%i",&escolha);

  for( int i=1; i<qtd; i++){
     if (escolha == numeros[i]){
       p = i;
     }
  }

  return 0;
}
