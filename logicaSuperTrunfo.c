#include <stdio.h>

int main() {
    // Definir as variáveis para armazenar os dados de cada carta
    char estado1[3], estado2[3];  // Estado (ex: SP, RJ)
    char codigo1[3], codigo2[3];  // Código da carta (ex: A01, B02)
    char cidade1[30], cidade2[30]; // Nome das cidades
    int pop1, pop2;              // População das cidades
    float area1, area2;          // Área das cidades
    float pib1, pib2;            // PIB das cidades
    int pontos_turismo1, pontos_turismo2; // Número de pontos turísticos
    float densidade1, densidade2;  // Densidade populacional
    float pib_per_capita1, pib_per_capita2; // PIB per capita

    // Dados da primeira carta
    // Exemplo: São Paulo
    printf("Cadastro da primeira cidade:\n");
    snprintf(estado1, sizeof(estado1), "SP");
    snprintf(codigo1, sizeof(codigo1), "A01");
    snprintf(cidade1, sizeof(cidade1), "SaoPaulo");
    pop1 = 12300000;
    area1 = 1521.11;
    pib1 = 53000.50;
    pontos_turismo1 = 30;

    // Dados da segunda carta
    // Exemplo: Rio de Janeiro
    printf("Cadastro da segunda cidade:\n");
    snprintf(estado2, sizeof(estado2), "RJ");
    snprintf(codigo2, sizeof(codigo2), "B02");
    snprintf(cidade2, sizeof(cidade2), "RioDeJaneiro");
    pop2 = 6000000;
    area2 = 1182.00;
    pib2 = 22500.00;
    pontos_turismo2 = 20;

    // Calcular densidade populacional (população / área)
    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;

    // Calcular PIB per capita (PIB / população)
    pib_per_capita1 = pib1 / pop1;
    pib_per_capita2 = pib2 / pop2;

    // Atributo para comparação: População
    printf("\nComparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s (%s): População = %d\n", cidade1, estado1, pop1);
    printf("Carta 2 - %s (%s): População = %d\n", cidade2, estado2, pop2);

    // Comparar as cartas com base no atributo População
    if (pop1 > pop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pop2 > pop1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate entre as cartas!\n");
    }

    // Comparação de densidade populacional
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");

    printf("Carta 1 - %s (%s): Densidade Populacional = %.2f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): Densidade Populacional = %.2f\n", cidade2, estado2, densidade2);

    // Comparar as cartas com base na densidade populacional
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate entre as cartas!\n");
    }

    // Comparação de PIB
    printf("Comparação de cartas (Atributo: PIB):\n");

    printf("Carta 1 - %s (%s): PIB = %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): PIB = %.2f\n", cidade2, estado2, pib2);

    // Comparar as cartas com base no PIB
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate entre as cartas!\n");
    }

    // Comparação de PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n");

    printf("Carta 1 - %s (%s): PIB per capita = %.2f\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): PIB per capita = %.2f\n", cidade2, estado2, pib_per_capita2);

    // Comparar as cartas com base no PIB per capita
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate entre as cartas!\n");
    }

    return 0;
}
