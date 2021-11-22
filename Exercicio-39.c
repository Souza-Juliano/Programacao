// 39. Entrar via teclado com doze valores e armazená-los em uma matriz de ordem 3x4. Após a 
// digitação dos valores solicitar uma constante multiplicativa, que deverá multiplicar
// cada valor matriz e armazenar o resultado na própria matriz, nas posições correspondentes.
#include <stdio.h>
 
int main(int argc, char *argv[]){
  //int numeros[3][4] = {4, 5, 7, 10, 25, 37, 85, 15, 43, 95, 98, 20 };
  int numeros[3][4];
 
  printf("Digite os numeros para matriz 3 x 4 \n");
  for(int i=0; i<3; i++){
      for(int j=0; j<4; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
 
  printf("Os numeros digitados na matriz multiplicados por 2  eh : \n");
  for(int i=0; i<3; i++){
      for(int j=0; j<4; j++){
          numeros[i][j] = numeros[i][j] * 2;
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
  return 0;
}