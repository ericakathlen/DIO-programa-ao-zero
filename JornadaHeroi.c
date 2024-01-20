/*Escreva um algoritmo que simule a jornada do herói pela floresta. 
O herói começa em uma posição inicial e deve dar uma série de passos para atravessar a floresta até a caverna do dragão.

        MANIPULANDO VARIAVEIS*/

#include <stdio.h>

int main(){

    int posicaoInicial, numeroPassos, posicaoFinal;

    printf("Digite a posicao inicial: \n");
    scanf("%d", &posicaoInicial);

    printf("Digite o numero de passos que o heroi deve dar: \n");
    scanf("%d", &numeroPassos);

    posicaoFinal = posicaoInicial + numeroPassos;

    printf("Posicao final do heroi: %d\n", posicaoFinal);


    return 0;
}