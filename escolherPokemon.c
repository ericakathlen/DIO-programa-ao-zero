/*Cada treinador escolhe um dos quatro pokemons. 
Seu desafio é criar uma solução que permita ao jogador escolher um dos Pokémons iniciais e exibir uma mensagem de boas-vindas e o Pokémon escolhido.

            CONDICIONAIS*/

#include <stdio.h>

int main(){

int escolhaTreinador;

    printf ("Escolha entre os pokemons da lista\n");
    printf("1 - Bulbasaur\n2 - Charmander\n3 - Pikachu\n4 - Mewtwo\n");
    scanf("%d", &escolhaTreinador);

    if(escolhaTreinador == 1){
        printf("Bulbasaur");
    }else if (escolhaTreinador == 2){
        printf("Charmander");
    }else if (escolhaTreinador == 3){
        printf("Pikachu");
    }else if(escolhaTreinador == 4){
        printf("Mewtwo");
    } else {
        printf("pokemon invalido!");
    }
    
    printf("Voce escolheu o %d como seu pokemon inicial.", escolhaTreinador);

    return 0;
}