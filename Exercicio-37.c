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
  int qtd, escolha, posicao;
  char tentativa;

  posicao=21;
  tentativa='S';

  printf("Digite a quantidade de numeros: ");
  scanf("%i", &qtd);

   while(qtd > 20){
    printf("Erro! Somente numeros menores do que 20. Digite novamente: ");
    scanf("%i", &qtd);
  }
 
  // O malloc reserva 100 blocos na memória e o ponteiro "numeros" aponta pra lá
  numeros = (int*)malloc(qtd*sizeof(int));
 
  printf("Digite os numeros: ");
  for(int i=0; i<qtd; i++){
      scanf("%i", &numeros[i]);
  }

    ponto:
    printf("Digite um dos numeros saber a posicao dele no vetor: ");
    scanf("%i", &escolha);

     for(int i=0; i<qtd; i++){
       if (escolha == numeros[i]) {

           posicao=i+1;
       }     
     }
      if (posicao<20) {
                       printf ("A posicao eh  %i", posicao);
                       tentativa == 'h';
                      }   
      else {
            printf ("Valor nao encontrado!"); 
           }    

printf ("\nDeseja pesquisar outro numero ( digete S se Sim e N se Nao): ");
scanf("%s", &tentativa);

if (tentativa =='S'){
goto ponto;
}
else{
 printf ("\n Obrigado!"); 
}   
    return 0;
}

