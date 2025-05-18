#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o movimento do Bispo (diagonal cima-direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Movimento do Cavalo com loops aninhados (duas para cima e uma para direita)
void moverCavalo() {
    int movimentosFeitos = 0;

    for (int i = 0; i < 2; i++) {  // Duas casas para cima
        if (i == 1) {
            printf("Cima\n");
            for (int j = 0; j < 1; j++) {  // Uma casa para a direita
                if (movimentosFeitos >= 3) break;
                printf("Direita\n");
                movimentosFeitos++;
            }
        } else {
            printf("Cima\n");
            continue;
        }
    }
}

// Movimento do Bispo com recursão e loops aninhados (extra)
void moverBispoAninhado(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Diagonal (Cima Direita)\n");
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // Torre - direita (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Linha em branco
    printf("\n");

    // Bispo - diagonal cima-direita (recursiva)
    printf("Movimento do Bispo (com recursão):\n");
    moverBispoRecursivo(casasBispo);

    // Linha em branco
    printf("\n");

    // Rainha - esquerda (recursiva)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    // Linha em branco
    printf("\n");

    // Cavalo - duas para cima, uma para direita (loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    // Linha em branco
    printf("\n");

    // Bispo - repetição aninhada
    printf("Movimento do Bispo (com loops aninhados):\n");
    moverBispoAninhado(casasBispo);

    return 0;
}
