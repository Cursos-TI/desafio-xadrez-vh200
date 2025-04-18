#include <stdio.h>

int main() {
    // Mover a torre 8 casas para frente
    for (int i = 0; i < 8; i++) {
        printf("Frente\n");
    }

    // Separação visual
    printf("\n--- Agora movendo a rainha ---\n\n");

    // Mover a rainha 8 casas à direita
    int x = 0;
    while (x < 8) {
        printf("Direita\n");
        x++;
    }

    // Separação visual
    printf("\n--- Agora movendo o bispo ---\n\n");

    // Mover o bispo com um do...while
    int b = 0;
    do {
        if (b < 5) {
            printf("Para cima à direita\n");
        } else {
            printf("."); 
        }
        b++;
    } while (b < 10);

    // Separação visual
    printf("\n--- Agora movendo o cavalo ---\n\n");

    int j = 1;
    while (j <= 1) {
        for (int k = 0; k < 2; k++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        j++;
    }

    return 0; 
}
