// Classificador de Nivel de Heroi
/*  Deve ser utilizado
    - variaveis
    - operadores
    - laços de repetiçao
    - estrutura de decisao
    
    Objetivo
    crie uma variavel para armazenar o nome e a quantidade de experiencia XP de um heroi, depois utilize uma estrutura de decisao
    para apresentar alguma das mensagens oferecidas*/

#include <stdio.h> 
int main(){

    char heroi[100];
    int XP;

    printf("Insira seu nome de usuario:\n");
    scanf(" %s", &heroi);

    printf("\nInsira sua quantidade de XP:\n");
    scanf("%d", &XP);

    printf("\nO Heroi %s esta no nivel %d da categoria ", heroi, XP);

    if(XP <= 1000){
        printf("Ferro\n");
    }else if(XP >=1001 && XP <=2000) {
        printf("Bronze\n");
    }else if(XP >=2001 && XP <= 3000){
        printf("Prata\n");
    }else if(XP >=3001 && XP <= 4000){
        printf("Ouro\n");
    }else if(XP >= 4001 && XP <= 5000){
        printf("Platina\n");
    }else if(XP >= 5001 && XP <=6000){
        printf("Diamante\n");
    }else if(XP >= 6001 && XP <= 9000){
        printf("Ascendente\n");
    }else if(XP >= 9001 && XP <= 10000){
        printf("Imortal\n");
    }else if(XP >= 10001){
        printf("Radiante\n");
    }else{
        printf("Experiencia nao corresponde a nenhum valor");
    }

    return 0;
}