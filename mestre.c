#include <stdio.h>

// ---------------------------
// Função recursiva para a TORRE
// Move 5 casas para a DIREITA
// ---------------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ---------------------------
// Função recursiva para o BISPO
// Move 5 casas na diagonal: CIMA + DIREITA
// Também simula com loops aninhados (externo: vertical, interno: horizontal)
// ---------------------------
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

void moverBispoComLoops(int casas) {
    printf("\nMovimento do BISPO com loops aninhados:\n");
    for (int i = 1; i <= casas; i++) {           // vertical
        for (int j = 1; j <= 1; j++) {           // horizontal (apenas 1 por movimento diagonal)
            printf("Cima Direita\n");
        }
    }
}

// ---------------------------
// Função recursiva para a RAINHA
// Move 8 casas para a ESQUERDA
// ---------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// ---------------------------
// Movimento complexo do CAVALO
// Usa loops aninhados e "continue" / "break"
// Simula movimentos em L: 2 casas CIMA + 1 casa DIREITA
// ---------------------------
void moverCavalo(int movimentos) {
    printf("Movimento do CAVALO:\n");
    int movimentosFeitos = 0;

    for (int vertical = 1; vertical <= 3; vertical++) {
        for (int horizontal = 1; horizontal <= 3; horizontal++) {
            // Movimentos válidos do Cavalo: 2 para cima e 1 para direita
            if (vertical == 2 && horizontal == 1) {
                printf("Cima Cima Direita\n");
                movimentosFeitos++;
            }

            if (movimentosFeitos >= movimentos) {
                break;  // Sai do loop interno
            }
        }

        if (movimentosFeitos >= movimentos) {
            break;  // Sai do loop externo
        }
    }
}

// ---------------------------
// Função principal
// ---------------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    // TORRE - Recursiva
    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre);

    printf("\n");

    // BISPO - Recursiva
    printf("Movimento do BISPO com recursividade:\n");
    moverBispoRecursivo(casasBispo);

    // BISPO - Loops aninhados
    moverBispoComLoops(casasBispo);

    printf("\n");

    // RAINHA - Recursiva
    printf("Movimento da RAINHA:\n");
    moverRainha(casasRainha);

    printf("\n");

    // CAVALO - Loops aninhados com break/continue
    moverCavalo(movimentosCavalo);

    return 0;
}