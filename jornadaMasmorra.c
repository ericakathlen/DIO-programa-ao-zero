#include <stdio.h>

int main() {
    int totalSalas;

    printf("Insira o total de salas: ");
    scanf("%d", &totalSalas);

    int salaComTesouros[] = {2, 4, 7};
    int salaComMonstros[] = {3, 6, 8};

    for (int sala = 1; sala <= totalSalas; sala++) {
        int temTesouro = 0;
        for (int i = 0; i < sizeof(salaComTesouros) / sizeof(salaComTesouros[0]); i++) {
            if (salaComTesouros[i] == sala) {
                temTesouro = 1;
                break;
            }
        }

        int temMonstro = 0;
        for (int i = 0; i < sizeof(salaComMonstros) / sizeof(salaComMonstros[0]); i++) {
            if (salaComMonstros[i] == sala) {
                temMonstro = 1;
                break;
            }
        }

        if (temTesouro) {
            printf("Tesouro na sala %d!\n", sala);
        } else if (temMonstro) {
            printf("Monstro na sala %d!\n", sala);
        }
    }

    return 0;
}