#include <stdio.h>
#include <stdlib.h>

/**
 * Desafio de Lógica de Programação - Nível Intermediário
 * Movimentação das peças de xadrez com foco em loops aninhados no Cavalo.
 */

int main() {
    // Limpa a tela de forma compatível com Windows e Linux
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Definição das constantes de movimento
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    const int CAVALO_VERTICAL = 2;
    const int CAVALO_HORIZONTAL = 1;

    printf("--- Movimentacao das Pecas ---\n\n");

    // 1. Torre: Movimento de 5 casas para a direita (FOR)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Bispo: Movimento de 5 casas para a diagonal (WHILE)
    printf("Movimento do Bispo:\n");
    int b = 1;
    while (b <= MOV_BISPO) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // 3. Rainha: Movimento de 8 casas para a esquerda (DO-WHILE)
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= MOV_RAINHA);
    printf("\n");

    // 4. Cavalo: Movimento em "L" usando loops FOR aninhados
    // O primeiro loop cuida da parte vertical e o segundo da horizontal
    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= 1; i++) { // Loop externo
        for (int j = 1; j <= CAVALO_VERTICAL; j++) { // Primeiro loop aninhado (Vertical)
            printf("Baixo\n");
        }
        for (int k = 1; k <= CAVALO_HORIZONTAL; k++) { // Segundo loop aninhado (Horizontal)
            printf("Esquerda\n");
        }
    }
    printf("\n");

    return 0;
}