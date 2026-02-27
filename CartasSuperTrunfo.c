#include <stdio.h>
#include <string.h>

/*
    DESAFIO SUPER TRUNFO - NÍVEL NOVATO
    -----------------------------------
    Objetivo:
    - Cadastrar duas cartas
    - Calcular densidade populacional e PIB per capita
    - Comparar um atributo numérico
    - Mostrar a carta vencedora
*/

int main() {

    /* ================================
       DECLARAÇÃO DAS VARIÁVEIS
       ================================ */

    // Dados da Carta 1
    char estado1[3];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados calculados Carta 1
    float densidade1;
    float pibPerCapita1;

    // Dados da Carta 2
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Dados calculados Carta 2
    float densidade2;
    float pibPerCapita2;

    /* ================================
       CADASTRO DA CARTA 1
       ================================ */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (UF): ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ================================
       CADASTRO DA CARTA 2
       ================================ */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (UF): ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ================================
       CÁLCULOS AUTOMÁTICOS
       ================================ */

    // Densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = PIB / população
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    /* ================================
       ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
       (Definido diretamente no código)
       ================================ */

    // ATRIBUTO ESCOLHIDO: POPULAÇÃO
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");

    printf("\nCarta 1 - %s (%s): %d habitantes\n",
           cidade1, estado1, populacao1);

    printf("Carta 2 - %s (%s): %d habitantes\n",
           cidade2, estado2, populacao2);

    /* ================================
       COMPARAÇÃO DAS CARTAS
       ================================ */

    // Para população: maior valor vence
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("\nResultado: Empate!\n");
    }

    /* ================================
       EXIBIÇÃO DOS CÁLCULOS
       ================================ */

    printf("\n=== Dados Calculados ===\n");

    printf("\nCarta 1 - %s\n", cidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\nCarta 2 - %s\n", cidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}