#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1;
    float area1;              
    float pib1;               
    int pontos_turisticos1; 

    int populacao2;         
    float area2;              
    float pib2;               
    int pontos_turisticos2; 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("-----Cadastro de carta 1 ---------");

    printf("Digite a população da carta 1 ");
    scanf( "%d" &populacao1);
    printf("Digite a area da Carta 1 (decimal): ");
    scanf("%f", &area1); 

    printf("Digite o PIB da Carta 1 (decimal): ");
    scanf("%f", &pib1); 

    printf("Digite o numero de pontos turisticos da Carta 1 (inteiro): ");
    scanf("%d", &pontos_turisticos1); 

    printf("\n"); 

    printf("--- Cadastro da Carta 2 ---\n"); 

    printf("Digite a populacao da Carta 2 (inteiro): ");
    scanf("%d", &populacao2);

    printf("Digite a area da Carta 2 (decimal): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (decimal): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2 (inteiro): ");
    scanf("%d", &pontos_turisticos2);

    printf("\n"); 

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     printf("--- Dados Cadastrados ---\n"); 

    printf("--- Carta 1 ---\n"); 
    printf("Populacao: %d\n", populacao1);               
    printf("Area: %.2f\n", area1);                       
    printf("PIB: %.2f\n", pib1);                         
    printf("Pontos Turisticos: %d\n", pontos_turisticos1); 
    printf("\n"); 

    printf("--- Carta 2 ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    
    printf("\n");

    return 0;
}
