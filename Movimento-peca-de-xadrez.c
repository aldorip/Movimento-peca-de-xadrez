#include <stdio.h>

int main() {
    // Simulação do movimento da Torre
    // A torre se move 5 casas para a direita
    // Usando estrutura de repetição: for
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Simulação do movimento do Bispo
    // O bispo se move 5 casas na diagonal para cima e à direita
    // Usando estrutura de repetição: while
    printf("Movimento do Bispo (5 casas para Cima e Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Simulação do movimento da Rainha
    // A rainha se move 8 casas para a esquerda
    // Usando estrutura de repetição: do-while
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
