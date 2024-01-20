/*Escreva um programa simples que simule o ganho de XP após derrotar um monstro. 
O programa deve calcular e exibir a quantidade de XP ganhos com base no nível do monstro e na dificuldade da batalha.

            OPERADORES LOGICOS*/

#include <stdio.h>

int main(){

    int num1, num2, XPGanho;

    printf("Digite o nivel do mosntro: \n");
    scanf("%d", &num1);

    printf("Digite o valor da dificuldade da batalha (Entre 1 a 100)\n");
    scanf("%d", &num2);

    XPGanho = num1 * num2 * 100;
    printf("Voce ganhou %d XP!", XPGanho);
    

    return 0;
}