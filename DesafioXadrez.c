#include <stdio.h>
#include <string.h>

// Definindo a estrutura de uma carta
struct Carta {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função que calcula a densidade populacional e o PIB per capita
void calcularIndicadores(struct Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função que imprime os dados de uma carta
void imprimirCarta(struct Carta carta) {
    printf("Cidade: %s (%s)\n", carta.nomeCidade, carta.estado);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta.pibPerCapita);
    printf("-------------------------------------\n");
}

int main() {
    // Cadastro de duas cartas (pré-definidas)
    struct Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 750.0, 10};
    struct Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6000000, 1182.30, 350.0, 8};

    // Calculando os indicadores para ambas as cartas
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    // Impressão das cartas
    printf("Dados da Carta 1:\n");
    imprimirCarta(carta1);

    printf("Dados da Carta 2:\n");
    imprimirCarta(carta2);

    // Comparação de atributo - População (você pode mudar para area, pib, etc.)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    // Estrutura de decisão para determinar a carta vencedora
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
