#include <stdio.h>

void partidas(int vitoria, int derrota){

    int totalVitorias = vitoria - derrota;

    if(vitoria <= 10){
        printf("Ferro\n");
    }else if (vitoria >= 11 && vitoria <=20){
        printf("Bronze\n");
    }else if(vitoria >=21 && vitoria <= 50){
        printf("Prata\n");
    }else if(vitoria >=51 && vitoria <= 80){
        printf("Ouro\n");
    }else if(vitoria >=81 && vitoria <= 90){
        printf("Diamante\n");
    }else if(vitoria >=91 && vitoria <= 100){
        printf("Lendario\n");
    }else if(vitoria >=101){
        printf("Imortal\n");
    }else{
        printf("valor invalido!\n");
    }
    
    
    printf("O Heroi tem saldo de %d e esta no rank de nivel de %d",totalVitorias, vitoria);
}
    
int main(){
    int vitoria, derrota;

    printf("Digite a quantidade de vitorias: \n");
    scanf("%d", &vitoria);

    printf("Digite a quantidade de derrotas: \n");
    scanf("%d", &derrota);

    partidas(vitoria, derrota);

    return 0;
}