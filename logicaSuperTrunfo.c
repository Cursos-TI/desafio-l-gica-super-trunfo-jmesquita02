#include <stdio.h>
#include <string.h>

// Definindo a estrutura CartaCidade para armazenar os dados das cidades
typedef struct {
    int codigo;
    char nome[50];
    char estado[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} CartaCidade;

// Função para validar entradas positivas
int entrada_positiva(int valor) {
    return valor > 0;
}

float entrada_positiva_float(float valor) {
    return valor > 0.0;
}

// Função para comparar duas cartas com base em um atributo
CartaCidade comparar_cartas(CartaCidade carta1, CartaCidade carta2, char atributo) {
    CartaCidade vencedora;

    switch (atributo) {
        case 'p': // Comparar população
            if (carta1.populacao > carta2.populacao) {
                return carta1;
            } else if (carta1.populacao < carta2.populacao) {
                return carta2;
            } else {
                printf("Empate na população!\n");
                return carta1; // Pode retornar qualquer uma
            }
        
        case 'a': // Comparar área
            if (carta1.area > carta2.area) {
                return carta1;
            } else if (carta1.area < carta2.area) {
                return carta2;
            } else {
                printf("Empate na área!\n");
                return carta1; // Pode retornar qualquer uma
            }

        case 'i': // Comparar PIB
            if (carta1.pib > carta2.pib) {
                return carta1;
            } else if (carta1.pib < carta2.pib) {
                return carta2;
            } else {
                printf("Empate no PIB!\n");
                return carta1; // Pode retornar qualquer uma
            }

        case 't': // Comparar pontos turísticos
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                return carta1;
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                return carta2;
            } else {
                printf("Empate nos pontos turísticos!\n");
                return carta1; // Pode retornar qualquer uma
            }

        default:
            printf("Atributo inválido!\n");
            return carta1; // Retorna a primeira carta por padrão
    }
}

// Função para exibir os dados de uma carta
void exibir_carta(CartaCidade carta) {
    printf("Cidade: %s - %s\n", carta.nome, carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    CartaCidade carta1, carta2;
    char atributo;

    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código: ");
    scanf("%d", &carta1.codigo);
    getchar();  // Consumir o newline
    printf("Nome da cidade: ");
    fgets(carta1.nome, 50, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = 0; // Remove o '\n' no final
    printf("Estado: ");
    fgets(carta1.estado, 50, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = 0; // Remove o '\n' no final
    printf("População: ");
    while (scanf("%d", &carta1.populacao) != 1 || !entrada_positiva(carta1.populacao)) {
        printf("Valor inválido. Digite uma população positiva: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }
    printf("Área (em km²): ");
    while (scanf("%f", &carta1.area) != 1 || !entrada_positiva_float(carta1.area)) {
        printf("Valor inválido. Digite uma área positiva: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }
    printf("PIB (em bilhões de R$): ");
    while (scanf("%f", &carta1.pib) != 1 || !entrada_positiva_float(carta1.pib)) {
        printf("Valor inválido. Digite um PIB positivo: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }
    printf("Pontos turísticos: ");
    while (scanf("%d", &carta1.pontos_turisticos) != 1 || !entrada_positiva(carta1.pontos_turisticos)) {
        printf("Valor inválido. Digite um número positivo de pontos turísticos: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }

    // Entrada de dados para a segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Código: ");
    scanf("%d", &carta2.codigo);
    getchar();  // Consumir o newline
    printf("Nome da cidade: ");
    fgets(carta2.nome, 50, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = 0; // Remove o '\n' no final
    printf("Estado: ");
    fgets(carta2.estado, 50, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = 0; // Remove o '\n' no final
    printf("População: ");
    while (scanf("%d", &carta2.populacao) != 1 || !entrada_positiva(carta2.populacao)) {
        printf("Valor inválido. Digite uma população positiva: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }
    printf("Área (em km²): ");
    while (scanf("%f", &carta2.area) != 1 || !entrada_positiva_float(carta2.area)) {
        printf("Valor inválido. Digite uma área positiva: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }
    printf("PIB (em bilhões de R$): ");
    while (scanf("%f", &carta2.pib) != 1 || !entrada_positiva_float(carta2.pib)) {
        printf("Valor inválido. Digite um PIB positivo: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }
    printf("Pontos turísticos: ");
    while (scanf("%d", &carta2.pontos_turisticos) != 1 || !entrada_positiva(carta2.pontos_turisticos)) {
        printf("Valor inválido. Digite um número positivo de pontos turísticos: ");
        while(getchar() != '\n'); // Limpar o buffer de entrada
    }

    // Exibir as cartas
    printf("----- Primeira Carta -----\n");
    exibir_carta(carta1);
    printf("----- Segunda Carta -----\n");
    exibir_carta(carta2);

    // Solicitar qual atributo comparar
    printf("Escolha o atributo para comparar (p - População, a - Área, i - PIB, t - Pontos turísticos): ");
    scanf(" %c", &atributo);

    // Comparar as cartas e exibir o vencedor
    CartaCidade vencedora = comparar_cartas(carta1, carta2, atributo);
    printf("Vencedor da comparação:\n");
    exibir_carta(vencedora);

    return 0;
}