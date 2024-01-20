#include <stdio.h>

int main() {
    int quantidadeGolpes;
    printf("Digite a quantidade de golpes:\n");
    scanf("%d", &quantidadeGolpes);

    char minerais[][10] = {"Carvao", "Ferro", "Diamante", "Pedra"};

    for (int i = 1; i <= quantidadeGolpes; i++) {
        int minaIndex = (i - 1) % (sizeof(minerais) / sizeof(minerais[0]));

        printf("%d : %s\n", i, minerais[minaIndex]);
    }

    return 0;
}