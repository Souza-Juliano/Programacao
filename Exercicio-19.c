#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])

{
//Declaração de variaveis
float a,b,c,v1,v2,R;
//entrando com os valores
printf("Digite o valor da aceleracao(m/s2): ");
scanf("%f",&a);
printf("Digite o valor da velocidade(m/s): ");
scanf("%f",&b);
printf("Digite o valor da tempo(segundos): ");
scanf("%f",&c);
//calculo para determinar a velocidade em metros por segundo
v1 = a+(b*c);
//calculo para determinar a velocidade em km/h
v2 = v1*3,6; //
printf("%f",v2);
//condiçõoes para se saber o caracteristica da velocidade
if(v2<=20){
        printf("\n Veiculo lento.");
        return 0;   
    }
    else if(v2<60||v2<=40){
        printf("\n Velocidade permitida.");
        return 0;
    }
    else if (v2<80||v2<=60){
        printf("\n velocidade de cruzeiro.");
        return 0;
    }
    else if(v2<120||v2<=80){
        printf("\n Veiculo rapido");
    } 
    else{
        printf("Veiculo muito rapido");
    }    
return 0;
}
