#include <stdio.h>
#include <stdlib.h>

//Fase de testes

typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    Ponto ponto1, ponto2;
    int distManhattan;

    printf("Digite as coordenadas do primeiro ponto (x, y): ");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    printf("Digite as coordenadas do segundo ponto (x, y): ");
    scanf("%d %d", &ponto2.x, &ponto2.y);

    distManhattan = abs(ponto1.x - ponto2.x) + abs(ponto1.y - ponto2.y);

    printf("\nPonto 1: (%d, %d)\n", ponto1.x, ponto1.y);
    printf("Ponto 2: (%d, %d)\n", ponto2.x, ponto2.y);
    printf("Distancia de Manhattan: %d\n", distManhattan);

    return 0;
}
 