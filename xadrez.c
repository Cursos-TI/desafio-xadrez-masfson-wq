
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Ajuste para limpar a tela tanto no Windows quanto no Linux/GitHub
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    
    printf("---Movimentaçâo das peças---\n\n");

    // 1. Torre: Movimento de 5 casas para a direita usando ( FOR)

    printf("Movimento da Torre: \n");
    for (int i = 1; i <= MOV_TORRE; i++) 
    {
        printf("Direita: %d\n", i);
    }
    printf("\n");

    // 2. Bispo: Movimento de 5 casas para a diagonal usando ( WHILE)

    int b = 1;
    while (b <= MOV_BISPO) 
    {
        printf("Cima, direita: %d\n",b);
        b++;
    }
    printf("\n");

    // 3. Rainha: Movimento de 8 casas para a direita usando ( DO-WHILE)

    int r = 1;
    do 
    {
        printf("Esquerda: %d\n", r);
        r++;
    } while (r <= MOV_RAINHA);




return 0;

}