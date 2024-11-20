#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código serve como base para desenvolver um sistema de comparação de cartas de cidades.
// Segue o uso de estruturas de decisão para determinar o vencedor final.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    float populacao1, populacao2;  // População em milhões
    float area1, area2;            // Área em km²
    float pib1, pib2;              // PIB em bilhões
    int pontos1, pontos2;          // Número de pontos turísticos
    int vitorias1 = 0, vitorias2 = 0; // Contadores de vitórias

    // Cadastro das Cartas
    printf("Cadastro da Primeira Cidade:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População (em milhões): ");
    scanf("%f", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Segunda Cidade:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População (em milhões): ");
    scanf("%f", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Comparação de Cartas
    printf("\nComparação entre %s (%s) e %s (%s):\n", cidade1, codigo1, cidade2, codigo2);

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("População: %s tem maior população.\n", cidade1);
        vitorias1++;
    } else if (populacao1 < populacao2) {
        printf("População: %s tem maior população.\n", cidade2);
        vitorias2++;
    } else {
        printf("População: Ambas as cidades têm a mesma população.\n");
    }

    // Comparação de Área
    if (area1 > area2) {
        printf("Área: %s tem maior área.\n", cidade1);
        vitorias1++;
    } else if (area1 < area2) {
        printf("Área: %s tem maior área.\n", cidade2);
        vitorias2++;
    } else {
        printf("Área: Ambas as cidades têm a mesma área.\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("PIB: %s tem maior PIB.\n", cidade1);
        vitorias1++;
    } else if (pib1 < pib2) {
        printf("PIB: %s tem maior PIB.\n", cidade2);
        vitorias2++;
    } else {
        printf("PIB: Ambas as cidades têm o mesmo PIB.\n");
    }

    // Comparação de Pontos Turísticos
    if (pontos1 > pontos2) {
        printf("Pontos Turísticos: %s tem mais pontos turísticos.\n", cidade1);
        vitorias1++;
    } else if (pontos1 < pontos2) {
        printf("Pontos Turísticos: %s tem mais pontos turísticos.\n", cidade2);
        vitorias2++;
    } else {
        printf("Pontos Turísticos: Ambas as cidades têm a mesma quantidade de pontos turísticos.\n");
    }

    // Determinação do Vencedor Final
    printf("\nResultado Final:\n");
    if (vitorias1 > vitorias2) {
        printf("A cidade vencedora é: %s (%s) com %d vitórias!\n", cidade1, codigo1, vitorias1);
    } else if (vitorias2 > vitorias1) {
        printf("A cidade vencedora é: %s (%s) com %d vitórias!\n", cidade2, codigo2, vitorias2);
    } else {
        printf("Empate! Ambas as cidades têm o mesmo número de vitórias (%d).\n", vitorias1);
    }

    return 0;
}
