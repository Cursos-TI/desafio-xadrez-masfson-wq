#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ajuste para limpar a tela tanto no Windows quanto no Linux/GitHub
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    
    printf("--- Movimentação das Peças ---\n\n");

    // 1. Torre: Movimento para a Direita usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita: %d\n", i);
    }
    printf("\n");

    // 2. Bispo: Movimento Diagonal (Cima e Direita) usando WHILE
    printf("Movimento do Bispo:\n");
    int b = 1;
    while (b <= MOV_BISPO) {
        printf("Cima, Direita: %d\n", b);
        b++;
    }
    printf("\n");

    // 3. Rainha: Movimento para a Esquerda usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda: %d\n", r);
        r++;
    } while (r <= MOV_RAINHA);
    printf("\n");

    // 4. Cavalo: Movimento em L (2 para Baixo, 1 para a Esquerda) usando loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 1; i++) { // Loop para a parte vertical
        int j = 1;
        while (j <= 2) {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    return 0;
}