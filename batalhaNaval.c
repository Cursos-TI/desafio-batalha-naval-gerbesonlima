#include <stdio.h>

int main() {
    // Declarando o tabuleiro e tamanhos
    int tabuleiro[10][10] = {0};
    int tamanho = 10;
    int tamanhoNavio = 3;

    // Posicionando navios
    int linhaNavioH = 2, colunaNavioH = 3; // Coordenadas do navio horizontal
    int linhaNavioV = 5, colunaNavioV = 7; // Coordenadas do navio vertical

    // Colocando navio horizontal
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaNavioH][colunaNavioH + i] = 3;
    }

    // Colocando navio vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaNavioV + i][colunaNavioV] = 3;
    }

    // Mostrando o tabuleiro
    printf("  A B C D E F G H I J\n"); // Letras na horizontal
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", i + 1); // Números na vertical
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]); // Mostra 0 (água) ou 3 (navio)
        }
        printf("\n");
    }

    return 0;
}
