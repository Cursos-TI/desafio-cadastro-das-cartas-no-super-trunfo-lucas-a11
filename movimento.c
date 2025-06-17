#include <stdio.h>

int main() {
    // ------------------------------------
    // Simulação do movimento da TORRE
    // Estrutura de repetição: FOR
    // Movimento: 5 casas para a DIREITA
    // ------------------------------------
    int i;
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre as peças

    // ------------------------------------
    // Simulação do movimento do BISPO
    // Estrutura de repetição: WHILE
    // Movimento: 5 casas na diagonal para CIMA e DIREITA
    // ------------------------------------
    int contador_bispo = 0;
    printf("Movimento do BISPO:\n");
    while (contador_bispo < 5) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    printf("\n"); // Espaço entre as peças

    // ------------------------------------
    // Simulação do movimento da RAINHA
    // Estrutura de repetição: DO-WHILE
    // Movimento: 8 casas para a ESQUERDA
    // ------------------------------------
    int contador_rainha = 0;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    return 0;
}
    