#include <stdio.h>

// ------------------ TORRE ------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Frente\n");
    moverTorre(casas - 1);  // chamada recursiva
}

// ------------------ RAINHA ------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverRainha(casas - 1);  // chamada recursiva
}

// ------------------ BISPO ------------------
// Função recursiva para "subir" verticalmente
void moverBispoVertical(int linha) {
    if (linha == 0) return;

    // Loop interno horizontal
    for (int coluna = 0; coluna < linha; coluna++) {
        printf("Para cima à direita\n");
    }

    moverBispoVertical(linha - 1);  // chamada recursiva
}

// ------------------ CAVALO ------------------
void moverCavalo() {
    // Simula múltiplos saltos em "L": 2 pra cima + 1 pra direita
    for (int i = 0; i < 3; i++) {  // número de movimentos
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }

        if (i == 1) continue;  // só pra exemplo: pule o meio

        printf("Direita\n");

        if (i == 2) break;  // encerra no último movimento
    }
}

int main() {
    // Quantidade de casas (pode ser constante)
    const int casasTorre = 8;
    const int casasRainha = 8;
    const int linhasBispo = 4;

    // ------------------ TORRE ------------------
    printf("\n--- Movendo a TORRE ---\n\n");
    moverTorre(casasTorre);

    // ------------------ RAINHA ------------------
    printf("\n--- Movendo a RAINHA ---\n\n");
    moverRainha(casasRainha);

    // ------------------ BISPO ------------------
    printf("\n--- Movendo o BISPO ---\n\n");
    moverBispoVertical(linhasBispo);

    // ------------------ CAVALO ------------------
    printf("\n--- Movendo o CAVALO ---\n\n");
    moverCavalo();

    return 0;
}
