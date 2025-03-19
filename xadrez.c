#include <stdio.h>

int main() {
    // Simulando o movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");  // Movimento para a direita
    }

    // Simulando o movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");  // Movimento na diagonal para cima e à direita
        j++;
    }

    // Simulando o movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");  // Movimento para a esquerda
        k++;
    } while (k < 8);

    return 0;
}
